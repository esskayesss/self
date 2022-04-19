#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int hchartoi(char ch){
    ch = tolower(ch);
    if(isdigit(ch)){
        return ch - '0';
    } else if(ch <= 'f' && ch >= 'a'){
        return 10 + ch - 'a';
    } else{
        fprintf(stderr, "Error. %c is not a valid hex digit.\n", ch);
        exit(1);
    }
}

int htoi(char* hex){
    if(tolower(*(hex + 1)) == 'x'){
        hex += 2;
    }
    int len = strlen(hex);
    int power = len - 1;
    int decimal = 0;

    while(*hex != '\0'){
        int digit = hchartoi(*(hex++));
        decimal += digit * (int)pow(16, power--);
    }
    return decimal;
}

int main(){
    char string[50];
    printf("Enter the hex string: ");
    scanf("%s", string);
    printf("%d\n", htoi(string));
}
