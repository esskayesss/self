#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main(){
    char whitespace, ch;
    int state = OUT;

    while((ch = getchar()) != EOF){
        if(isalpha(ch)){ 
            putchar(ch);
            break;    
        }
    }
    state = IN;
    
    while((ch = getchar()) != EOF){
        if(ch == '\n') putchar('\n');
        if(!isspace(ch)){
            if(state == OUT){
                putchar(whitespace);
            }
            state = IN;
            putchar(ch);
        } else{
            if(state == IN){
                whitespace = ch;
                state = OUT;
            }
        }
    }
}
