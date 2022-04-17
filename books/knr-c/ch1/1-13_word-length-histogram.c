#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main(){
    char ch;
    int state = OUT;
    int* word_lengths = (int*) malloc(46 * sizeof(int));
    int max = 0;

    while((ch = getchar()) != EOF){
        if(!isalpha(ch)){
            if(state == IN){
                int length = *word_lengths;
                state = OUT;
                *(word_lengths + length) += 1;
                if(length > max) max = length;
                *word_lengths = 0;
            }
        } else {
            (*word_lengths)++;
            state = IN;
        }
    }
    for(int i = 1; i <= max; i++){
        printf("%2d: ", i);
        for(int j = 0; j < *(word_lengths + i); j++){
            printf("=");
        }
        printf("\n");
    }
}
