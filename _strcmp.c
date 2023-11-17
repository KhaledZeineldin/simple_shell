#include "main.h"


int _strcmp(const char *string1, const char *string2) {
    while (*string1 != '\0' && *string2 != '\0') {
        if (*string1 != *string2) {
            return (*string1 - *string2);
        }
        string1++;
        string2++;
    }

    return (*string1 - *string2);
}