#include <stdio.h>

#define SPACES 4

int main(){
    char ch;

    while((ch = getchar()) != EOF){
        if(ch == '\t'){
            for(int i = 0; i < SPACES; i++)
                putchar(' ');
        } else putchar(ch);
    }
}
