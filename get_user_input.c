#include "main.h"
#define MAX_INPUT_LENGTH 500

/*
*COMMENTS FOR BETTY
*/
char* get_user_input(void)
{
    char input[MAX_INPUT_LENGTH];
    if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL)
    {
        if (feof(stdin)){
            exit(EXIT_SUCCESS);
        }
        else{
            perror("fgets");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        input[strcspn(input, "\n")] = '\0';
        char* result = (char*)malloc(strlen(input) + 1);
        
        if (result != NULL) {
            strcpy(result, input);
            return result;
        } else {
            printf("Memory allocation failed.\n");
            return NULL;
        }
    
        return NULL;
    }
}