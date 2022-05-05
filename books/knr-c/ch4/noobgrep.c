#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int get_line(char line[], int max);
int strindex(char source[], char searchfor[]);

int main(){
    char line[MAXLINE], pattern[50];
    int found = 0;

    printf("Enter the pattern to search for: ");
    get_line(pattern, 50);
    int pattern_len = strlen(pattern);
    if(pattern[pattern_len - 1] == '\n') pattern[pattern_len - 1] = '\0';


    while(get_line(line, MAXLINE) > 0){
        int idx = strindex(line, pattern);
        if(idx >= 0){
            printf("%s", line);
            found++;
        }
    }

    return found;
}

int get_line(char line[], int max){
    int c, i;
    i = 0;
    while(i < max && (c = getchar()) != EOF && c != '\n')
        line[i++] = c;

    if(c == '\n')
        line[i++] = c;

    line[i] = '\0';
    return i;
}

int strindex(char* line, char* pattern){
    char* cursor = line;
    while(*cursor != '\0'){
        char* l_cursor = cursor;
        char* p_cursor = pattern;
        while(*p_cursor == *l_cursor){
            p_cursor++;
            l_cursor++;
        }
        if(*p_cursor == '\0') return cursor - line;
        cursor++;
    }

    return -1;
}
