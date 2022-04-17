#include <stdio.h>

int main(){
    char ch;
    printf("\n");
    while((ch = getchar()) != EOF){
        if(ch == '\t') printf("\\t");
        else if(ch == '\b') printf("\\b");
        else if(ch == '\\') printf("\\");
        else printf("%c", ch);
    }
    printf("\n");
}
