// #include "main.h"
// #include <unistd.h>
// #include <sys/types.h>
// #include <unistd.h>
// //#include <sys/wait.h>


// void run_command(char *command) {


//     pid_t child_process = fork();

//     if (child_process == -1) 
//     {
//         perror("fork");
//         exit(EXIT_FAILURE);
//     } 
//     else if (child_process == 0) 
//     {
//         char *args[] = {command, NULL};
//         execve(command[0], args, NULL);

//         perror("execve");
//         exit(EXIT_FAILURE);
//     } else {
//         printf("");
//         // Parent process
//         //wait(NULL);
//     }
// }