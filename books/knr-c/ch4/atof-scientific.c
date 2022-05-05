#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double atof_s(char* str){
    double val = 0;
    int sign = 1;
    char* cursor = str;
    if(*cursor == '-'){
        *cursor++;
        sign = -1;
    }

    float v_factor = 10, t_factor = 1;
    int is_decimal = 0;
    
    while(*cursor != '\0' && *cursor != 'e' && *cursor != '\n'){
        if(*cursor == '.'){
            v_factor = 1;
            is_decimal = 1;
            cursor++;
            continue;
        }
        if(is_decimal){
            t_factor *= 0.1;
        }
        int term = *cursor - '0';
        val *= v_factor;
        val += term * t_factor;
        cursor++;
    }
    
    if(*cursor == 'e'){
        val *= pow(10, atof(cursor+1));
    }

    return sign * val;
}

int main(){
    size_t size = 10;
    char* number = (char*)malloc(size*sizeof(char));
    getline(&number, &size, stdin);
    printf("%lf\n", atof_s(number));
}
