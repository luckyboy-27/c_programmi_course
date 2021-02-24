#include <stdio.h>

int main() {
    const int size = 7; 
    int arr[7] = {12331, 979757, 989787, 6447, 5454, 354353, 535435};
    int temp;
    int j = 0;

    puts("Original Array: ");
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }

    while (j<size-1) {
        // arr[j] < arr[j+1] sort big to small 
        if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j = -1;
        }
        j+= 1;
    }

    puts("\nSorted Array: ");
    for (int x = 0; x<size; x++) {
        printf("%d\t", arr[x]);
    }
    putchar('\n');
    return 0;
}