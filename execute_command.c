#include "main.h"

int execute_command(char * input) 
{
    char *token;
    char *args[50]; 
    int arg_count = 0;
    pid_t child_pid;
    token = strtok(input, " ");
    
    

    while (token != NULL) {
        args[arg_count] = token;
        arg_count++;
        token = strtok(NULL, " "); 
    }
    args[arg_count] = NULL;
    free(token); 
    child_pid = fork();
    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
        execve(args[0], args, NULL); 
        perror("execve"); 
        exit(EXIT_FAILURE);

    } else {
        wait(NULL); 
    }


    return 0;
}