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

void itob(int n, int b, char* str){
    char* cursor = str;
    while(n != 0){
        int mod = n % b;
        n /= b;
        if(mod < 10){
            *(cursor++) = '0' + mod;
        } else{
            *(cursor++) = 'A' + mod - 10;
        }
    }
    *cursor = '\0';
    reverse(str);
}

int main(){
    int number, base;
    char str[50];

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the base: ");
    scanf("%d", &base);

    itob(number, base, str);

    printf("%d in base %d is %s.\n", number, base, str);
}
