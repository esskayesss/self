#include <stdio.h>

float fahr_cel(float fahr){
    return 5 * (fahr - 32) / 9;
}

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf(" FAHR - CELSIUS\n");
    while(fahr <= upper){
        printf("%5d - %3.2f\n", fahr, fahr_cel(fahr));
        fahr += step;
    }
}
