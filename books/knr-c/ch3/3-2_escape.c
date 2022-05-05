#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIMIT 100

void escape(char* s, char* t){
    while(*t != '\0'){
        if(*t == '\n'){
            *(s++) = '\\';
            *(s++) = 'n';
        } else if(*t == '\t'){
            *(s++) = '\\';
            *(s++) = 't';
        } else{
            *(s++) = *t; 
        }
        t++;
    }
    *s = '\0';
}

int main(){
    char str[MAX_LIMIT];
    fgets(str, MAX_LIMIT, stdin);

    char *copy = (char*)malloc(strlen(str)*sizeof(char));
    escape(copy, str);

    printf("%s copied\n", copy);
}
