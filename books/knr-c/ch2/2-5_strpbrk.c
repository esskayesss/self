#include <stdio.h>
#include <string.h>

char* p_strpbrk(char* s1, char* s2){
    while(*s1 != '\0'){
        if(strchr(s2, *s1)) return s1;
        s1++;    
    }
}

int main(){
    char s1[50], s2[50];
    int c1, c2;
    c1 = c2 = 50;
    printf("Enter the string s1: ");
    fgets(s1, c1, stdin);
    printf("Enter the string s2: ");
    fgets(s2, c2, stdin);
    printf("%ld\n", p_strpbrk(s1, s2) - s1);
}
