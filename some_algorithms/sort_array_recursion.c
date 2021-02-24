#include <stdio.h>

void sort(int arr[], int size) {
    int temp;
    if (size == 1) {
        printf ("%d\n", arr[0]);
    }
    else {
        for (i=0; i<size; i++) {
            if (arr[i] > arr[i+1]) {
                arr[i] = temp;
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        sort(arr, n-1);
    }
    return;
}

int main() {
    const int size = 7; 
    int arr[7] = {12331, 979757, 989787, 6447, 5454, 354353, 535435};
    int temp;
    int j = 0;

    puts("Original Array: ");
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }

    sort(arr, size);

    puts("\nSorted Array: ");
    for (int x = 0; x<size; x++) {
        printf("%d\t", arr[x]);
    }
    putchar('\n');
    return 0;
}