#include <stdio.h>

#define MULTILINE_COMMENT 0
#define LINE_COMMENT 1
#define WRITE 2

int main(){
    char ch;
    int state = WRITE;

    while((ch = getchar()) != EOF){
        char temp = '\0';
        printf("%c", temp);
        if(ch == '/'){
            temp = getchar();
            if(temp == '/'){
                state = LINE_COMMENT;
                continue;
            } else if(temp == '*'){
                state = MULTILINE_COMMENT;
                continue;
            }
        } else if(ch == '*' && state == MULTILINE_COMMENT){
            temp = getchar();
            if(temp == '/'){
                state = WRITE;
                continue;
            }
        } else if(ch == '\n' && state == LINE_COMMENT){
            state = WRITE; continue;
        }
        if(state == WRITE) printf("%c%c", ch, temp);
    }
}
// this is a single line comment
/*
 * this is a multiline comment
 * */
