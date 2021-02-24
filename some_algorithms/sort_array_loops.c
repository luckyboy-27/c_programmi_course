#include <stdio.h>


int main() {
    const int size = 7; 
    int arr[7] = {12331, 979757, 989787, 6447, 5454, 354353, 535435};
    int temp;

    puts("Original Array: ");
    for (int i=0; i<size; i++) {
        printf("%d\t", arr[i]);
    }

    for (int a=0; a<size-1; a++) {
        for (int b=a+1; b<size; b++) {
            if (arr[a] > arr[b]) {
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }

    puts("\nSorted Array: ");
    for (int x = 0; x<size; x++) {
        printf("%d\t", arr[x]);
    }
    putchar('\n');
    return 0;
}