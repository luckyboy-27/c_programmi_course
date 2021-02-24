#include <stdio.h>
#include <stdlib.h>

//Write a function to compute the sum of all the elements of a 1D array.
float compute_sum(float* array, int length);

int main() {
    int i, num, sum = 0;
    printf("number of elements: ");
    scanf("%d", &num);
    float ls[num];
    printf("enter the elements: ");
    for (i=0; i<num; i++) {
        scanf("%f", ls + i);
    }
    printf("Sum of the array is %f\n", compute_sum(ls, num));
    return 0;
}

float compute_sum(float* array, int length) {
    int i;
    float x = 0;
    for (i=0; i<length; i++) {
        x += array[i];
    }
    //printf("sum of the array is %f\n", x);
    return x;
}