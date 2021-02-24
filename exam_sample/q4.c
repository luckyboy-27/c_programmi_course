#include <stdio.h>

//Write a function to count an element in an array
int count(int arr[100], int length, int element);

int main() {
    int arr[7] = {1, 2, 31, 2, 2, 21, 11};
    printf("number of elements is %d", count(arr, 7, 2));
    putchar('\n');
    return 0;    
}

int count(int arr[100], int length, int element) {
    int i, j;
    int x = 0;
    for (i=0; i<length; i++) {
        if (element == arr[i]) {
            x++;
        }
    }
    return x;
}