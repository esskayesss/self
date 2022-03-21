#include <stdio.h>

float fahr_cels(float fahr){
    return 5 * (fahr - 32) / 9;
}

int main(){
    int lower, upper, step;
    float fahr, cel;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;

    printf(" FAHR - CELSIUS\n");
    while(fahr >= lower){
        printf("%5.f - %+3.2f\n", fahr, fahr_cels(fahr));
        fahr -= step;
    }
}
