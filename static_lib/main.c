#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int choice;
    
    while (1) {
        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        if (choice == 7) {
            break; // Exit the loop
        }

        switch (choice) {
            case 1: // Addition
                int a, b;
                printf("Enter the first number: ");
                scanf("%d", &a);
                printf("Enter the second number: ");
                scanf("%d", &b);
                printf("%d + %d = %ld\n", a, b, add(a, b));
                break;

            case 2: // Subtraction
                int c, d;
                printf("Enter the first number: ");
                scanf("%d", &c);
                printf("Enter the second number: ");
                scanf("%d", &d);
                printf("%d - %d = %ld\n", c, d, diff(c, d));
                break;

            case 3: // Multiplication
                int e, f;
                printf("Enter the first number: ");
                scanf("%d", &e);
                printf("Enter the second number: ");
                scanf("%d", &f);
                printf("%d * %d = %ld\n", e, f, prod(e, f));
                break;

            case 4: // Division
                double g, h;
                printf("Enter the first number: ");
                scanf("%lf", &g);
                printf("Enter the second number: ");
                scanf("%lf", &h);
                printf("%f / %f = %f\n", g, h, fract(g, h));
                break;

            case 5: // Factorial
                int i;
                printf("Enter the number to calculate the factorial: ");
                scanf("%i", &i);
                printf("fact(%d) = %lu\n", i, fact(i));
                break;

            case 6: // Square Root
                double j;
                printf("Enter the number to calculate the square root: ");
                scanf("%lf", &j);
                printf("Square root of (%f) = %f\n", j, sqroot(j));
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

