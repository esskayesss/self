#include <stdio.h>
#include <string.h>

int strrindex(char* str, char* pattern);

int main(){
    char* str = "this is is";
    char* pattern = "is";
    printf("%d\n", strrindex(str, pattern));
}

int strrindex(char* str, char* pattern){
    int len = strlen(str);
    int plen = strlen(pattern);
    char* cursor = str + len - plen;
    int ridx = len - 1;

    while(cursor != str){
        int j = 0;
        while(*(pattern+j) != '\0' && *(pattern + j) == *(cursor + j))
            j++;
        if(*(pattern+j) == '\0')
            return cursor - str;
        cursor--;
    }
    return -1;
}
