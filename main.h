#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>


void print(char *string);
void shell_prompt();
char *get_user_input();
char *tokenize_input(char *input);
void run_command(char *command);
char **tokenize_input2(char *input);
char *get_first_token(char *input);
int execute_command(char *input);
int _exit_shell(char *command);
void _print_env(void);
char*_strcpy(char *destiantion, const char *source);
int _strcmp(const char *string1, const char *string2);
bool startswith(const char *str, const char *letters);
char *skip_char(char *str, int skips);
char *extract_PATH();
void tokenize_path();


#endif
