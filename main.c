#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "main.h"

/*
*COMMENTS FOR BETTY
*/

int main(void){
    char user_input[1000];
    char* command;
    char command_path[300];
    

    while(true)
    {
    if(isatty(STDIN_FILENO)){shell_prompt();}
    command = get_user_input();
    if (_strcmp(command, "exit") == 0){break;}
    if (_strcmp(command, "env") == 0) {_print_env();}
    if(strlen(command) == 0){continue;}
    if (startswith(command, "/bin/")){execute_command(command);}
    else{
    snprintf(command_path, sizeof(command_path), "/bin/%s", command);
    execute_command(command_path);
    }
    free(command);
    }
}