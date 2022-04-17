#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main(){
    char ch;
    int state = OUT;

    while((ch = getchar()) != EOF){
        if(ch == ' '){
            if(state == IN){
                printf(" ");
                state = OUT;
            }
        } else if(!isspace(ch)){
            state = IN;
            printf("%c", ch);
        }
    }
    printf("\n");
}
