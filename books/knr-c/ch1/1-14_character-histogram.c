#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/ioctl.h>
#include <math.h>

int main(){
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);

    char ch;
    int* ch_freq = (int*) malloc(25*sizeof(int));

    while((ch = getchar()) != EOF)
        if(isalpha(ch)){
            ch = tolower(ch);
            *(ch_freq + (ch - 'a')) += 1;
        }

    int max = 0;
    for(int i = 0; i < 24; i++){
        int freq = *(ch_freq + i);
        if(max < freq) max = freq;
    }
    
    float scale = 1.0 / max * (w.ws_col - 30);
    if(max < w.ws_col - 10) scale = 1;

    for(int i = 0; i < 24; i++){
        printf("%c [%3d]: ", 'a' + i, *(ch_freq + i));
        for(int j = 0; j < ceil(*(ch_freq + i) * scale); j++)
            printf("=");
        printf("\n");
    }
    printf("Scale: %.2f\n", scale);
}
