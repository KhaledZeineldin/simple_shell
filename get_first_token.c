#include "main.h"
char * get_first_token(char * input)
{
    char *token;
   
    // Tokenize the input command
    token = strtok(input, " ");
    return token;
}