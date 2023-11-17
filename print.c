#include "main.h"

/*
*COMMENTS FOR BETTY
*/

void print(char* string)
{
    write(STDOUT_FILENO, string, strlen(string));
}