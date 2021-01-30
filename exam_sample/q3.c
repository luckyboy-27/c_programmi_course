#include <stdio.h>

//Write a function to sort an array
int sort(int arr[100], int size);

int main() {
    int arr[9] = {12, 24, 423, 31, 3131, 438, 21, 233, 31};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    putchar('\n');
    return 0;
}

int sort(int arr[100], int size) {
    int i, j, temp;
    //array must be same size
    for (i=0; i<size-1; i++) {
        for (j=i+1; j<size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted array is: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}