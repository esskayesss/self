#include <stdio.h>
#include <stdlib.h>

int binary_search(int key, int *arr, int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while(key != *(arr + mid) && low < high){
        if(key < *(arr + mid)){
            high = mid + 1;
        } else{
            low = mid + 1;
        }
        mid = (low + high)/2;
    }

    if(key == *(arr + mid)){
        return mid;
    } else{
        return -1;
    }
} 

int main(){
    int n, key;
    int* arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));

    printf("Enter the key to search for: ");
    scanf("%d", &key);
    

    printf("Enter the n elements.\n");
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);
    }

    int idx = binary_search(key, arr, n);
    printf("%d\n", idx);
}
