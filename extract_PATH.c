#include "main.h"

char* extract_PATH(){
    extern char **environ;
    char *path_env = NULL;
        for (int i = 0; environ[i] != NULL; i++) {
            if (strncmp(environ[i], "PATH=", 5) == 0) {
                path_env = environ[i];
                return path_env;
            }
        }
    
}