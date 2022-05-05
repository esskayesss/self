#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
    char *begin_ptr, *end_ptr, ch;

    int len = strlen(str);
    begin_ptr = str;
    end_ptr = str + (len - 1);

    while(begin_ptr < end_ptr){
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        begin_ptr++;
        end_ptr--;
    }
}

void itoa(int num, char *str, int width){
    char* cursor = str;
    int len = 0;
    
    while(num != 0){
        int digit = num % 10;
        num /= 10;
        *(cursor++) = '0' + digit;
        len++;
    }
    
    while(len++ < width)
        *(cursor++) = ' ';

    *cursor = '\0';

    reverse(str);
}

int main(){
    int num, width;
    char str[50];

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the width: ");
    scanf("%d", &width);

    itoa(num, str, width);

    printf("Printing: |%s|\n", str);
}
