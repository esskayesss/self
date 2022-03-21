#include <stdio.h>

float cel_fahr(float cel){
    return 9 * cel / 5 + 32;
}

int main(){
    int lower, upper, step;
    float fahr, cel;

    lower = 0;
    upper = 300;
    step = 20;

    cel = lower;

    printf(" CELS - FAHR\n");
    while(cel <= upper){
        printf("%5.f - %+3.2f\n", cel, cel_fahr(cel));
        cel += step;
    }
}
