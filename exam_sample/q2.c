#include <stdio.h>
#include <stdlib.h>

//Write a function to compute the sum of all the elements of a 1D array.
float compute_sum(float* array, int length);

int main() {
    float ar[10] = {1, 2 ,3};
    compute_sum(ar, 3);
    return 0;
}

float compute_sum(float* array, int length) {
    int i;
    float x = 0;
    for (i=0; i<length; i++) {
        x += array[i];
    }
    printf("sum of the array is %f\n", x);
    return 0;
}