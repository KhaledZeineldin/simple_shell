#include "main.h"


char * skip_char(char *str, int skips){
    int i = 0;
    for(i =0; i <skips; i++){
        str++;
    }
    return str;
}