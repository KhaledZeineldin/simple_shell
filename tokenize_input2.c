//  #include "main.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <sys/wait.h>
// char ** tokenize_input2(char * input)
// {
//     char *token = strtok(input, " ");
//     char **args; 

//     int i = 0;
//     while (token != NULL) {
//         args[i++] = token;
//         token = strtok(NULL, " ");
//     }
//     args[i] = NULL; 

//     pid_t pid = fork();
//     if (pid == 0) {
//         // Child process
//         execvp(args[0], args);
//         // If execvp fails, print an error message
//         perror("execvp");
//         exit(EXIT_FAILURE);
//     } else if (pid > 0) {
//         // Parent process
//         int status;
//         waitpid(pid, &status, 0);
//         if (WIFEXITED(status)) {
//             printf("Child process exited with status %d\n", WEXITSTATUS(status));
//         }
//     } else {
//         perror("fork");
//         return EXIT_FAILURE;
//     }

// }