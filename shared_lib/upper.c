#include <ctype.h>
#include "header.h"

void to_upper(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

