#include "main.h"

int _exit_shell(char * command)
{
    if (strcmp(command, "exit") == 0) return 1;
}