#include <stdio.h>

int main(){
    char ch;

    while((ch = getchar()) != EOF);
    printf("int: %d, %c\n", ch, ch);
}
