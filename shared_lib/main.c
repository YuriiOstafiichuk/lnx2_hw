#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h> // shared lib handler
#include "header.h"

int main() {
    char input[100];
    int choice;

    void* upper_lib = dlopen("libupper.so", RTLD_LAZY);
    void* lower_lib = dlopen("liblower.so", RTLD_LAZY);

    if (!upper_lib || !lower_lib) {
        fprintf(stderr, "Failed to load shared libraries.\n");
        return 1;
    }

    printf("Select an operation:\n");
    printf("1. Convert to uppercase\n");
    printf("2. Convert to lowercase\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        fprintf(stderr, "Invalid choice.\n");
        dlclose(upper_lib);
        dlclose(lower_lib);
        return 1;
    }

    void (*convertFunction)(char*) = (choice == 1) ? dlsym(upper_lib, "to_upper") : dlsym(lower_lib, "to_lower");

    if (!convertFunction) {
        fprintf(stderr, "Error resolving function.\n");
        dlclose(upper_lib);
        dlclose(lower_lib);
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]s", input);

    convertFunction(input);

    if (choice == 1)
        printf("Uppercase: %s\n", input);
    else
        printf("Lowercase: %s\n", input);

    dlclose(upper_lib);
    dlclose(lower_lib);

    return 0;
}

