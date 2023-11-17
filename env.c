#include "main.h"

int env(int argc, char *argv[], char *envp[]) 
{
    for (int i = 0; envp[i] != NULL; i++) {
        printf("%s\n", envp[i]);
    }

    return 0;
}