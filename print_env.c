#include "main.h"

void _print_env(void)
{
extern char** environ;

for (char** env = environ; *env != NULL; env++) 
printf("%s\n", *env);
}