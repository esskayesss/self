#include <stdio.h>
#include <ctype.h>

#define IN 0
#define OUT 1

main(){
    long nc, nl, nw;
    char ch;

    short state = OUT;

    for(nc = 0, nl = 0, nw = 0; (ch = getchar()) != EOF; nc++){
        if(isspace(ch)){
            if(ch == '\n') nl++;
            
            if(state == IN){
                state = OUT;
                nw++;
            }
        } else state = IN;
    }
    if(state == IN){
        nl++; nw++;
    }
    printf("\n%ld characters\n%ld lines\n%ld words\n", nc, nl, nw);
}
