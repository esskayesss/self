#include <stdio.h>
#include <string.h>
#include <ctype.h>

void squeeze(char* string, char* legend){
    char* cursor = string;
    while(*cursor != '\0'){
        char ch = *(cursor++);
        if(!strchr(legend, ch)){
            *(string++) = ch;
        }
    }
    *string = '\0';
}

int main(){
    char string[50], legend[50];
    printf("Enter the original string: ");
    scanf("%s", string);
    printf("Enter the characters to ignore: ");
    scanf("%s", legend);
    squeeze(string, legend);
    printf("%s\n", string);
}
