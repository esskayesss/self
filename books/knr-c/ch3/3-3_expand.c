#include <stdio.h>
#include <string.h>

char* print_range(char c1, char c2, char* cursor){
    while(c1 <= c2)
        *(cursor++) = c1++;
    return cursor;
}

void expand(char* s, char* t){
    char* cursor = t;
    char* head = s;
    char* visited = NULL;

    while(*s != '\0' && *s != '\n'){
        if(*s == '-'){
            if(s - 1 >= head && *(s + 1) != '\0'){
                char c1 = *(s - 1);
                char c2 = *(s + 1);
                if(visited >= s - 1){
                    c1++;
                }
                cursor = print_range(c1, c2, cursor);
                visited = s + 1;
            } else{
                *(cursor++) = '-';
            }
        }
        s++;
    }
    *cursor = '\0';
}

int main(){
    char str[10];
    fgets(str, 10, stdin);
    char expanded[500];

    expand(str, expanded);
    printf("%s is the expanded version.\n", expanded);
}
