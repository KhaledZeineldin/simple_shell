#include "main.h"

/*
*COMMENTS FOR BETTY
*/

void shell_prompt()
{
    char cwd[1000];
    getcwd(cwd,sizeof(cwd));
    print(cwd);
    print("~ $ ");
}