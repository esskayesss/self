#include <stdio.h>

int main(){
    int blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    char ch;

    while((ch = getchar()) != EOF){
        if(ch == '\t') tabs++;
        else if(ch == '\n') newlines++;
        else if(ch == ' ') blanks++;
    }

    printf("The entered string had %d blanks, %d tabs and %d newlines.\n", blanks, tabs, newlines);
}
