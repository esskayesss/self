#include <stdio.h>
#include <string.h>

int main(){
    char string[50];
    scanf("%s", &string);

    int len = strlen(string);

    for(int i = len - 1; i >= 0; i--)
        putchar(string[i]);

    putchar('\n');
}
