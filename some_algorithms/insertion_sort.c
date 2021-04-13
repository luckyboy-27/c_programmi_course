#include <stdio.h>

void insertion_sort (int *arr, int length) {
    int i, j, temp;
    for (i=0; i<length; i++) {
        temp = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    int arr[] = {43765, 231, 31, 3, 123, 312, 434, 21, 544, 1};
    int length = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, length);
    for (int i=0; i<length; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
    return 0;
}