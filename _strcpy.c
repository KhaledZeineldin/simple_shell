#include "main.h"

char* _strcpy(char *destiantion, const char *source) {
    char *original_dest = destiantion;

    while (*source != '\0') {
        *destiantion = *source;
        destiantion++;
        source++;
    }

    *destiantion = '\0'; 

    return original_dest; 
}