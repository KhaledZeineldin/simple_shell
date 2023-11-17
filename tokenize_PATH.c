#include "main.h"


void tokenize_path(char * command){
    char *token;
    char *args[50]; 
    int arg_count = 0;
    pid_t child_pid;
    char cmd[1000];
    token = strtok(skip_char(extract_PATH(), 5), ":");
    
    while (token != NULL) {
        // args[arg_count] = token;
        // arg_count++;
        token = strtok(NULL, ":");
        sprintf(cmd, "%s/%s", token, command);

        if (access(cmd, X_OK) == 0) {
            execute_command(cmd);
            return;
        }
    }
    perror("execve");
    token = strtok(NULL, ":");
    free(token);
    
}
