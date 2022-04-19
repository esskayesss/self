// In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
//
// initially, I mistook this as the rightmost bit. it actually refers to the rightmost bit that has '1'. For example, in 1000, the rightmost 1-bit is the 4th bit from right to left. 
// it can be clearly observed that x &= (x-1) does indeed wipe off the rightmost 1-containing bit and make it zero. 
// the bitcount solution is therefore to repeat x &= (x-1) until x becomes 0, obviously keeping a count all the while.

#include <stdio.h>

int bitcount(int x){
    int count = 0;
    while(x != 0){
        x &= (x-1);
        count++;
    }
    return count;
}

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("The number of 1-containing bits in %d is %d.\n", x, bitcount(x));
}
