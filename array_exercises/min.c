#include <stdio.h>

int minima(int *arr, int length);

int main() {
    int n, i;
    int num[100];

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("The min value in the array is %d\n", minima(num, n));
    return 0;
}

int minima(int *arr, int length) {
    int i;
    for (i=0; i<length; i++) {
        if (arr[0] > arr[i]) {
            arr[0] = arr[i];
        } 
    }
    return arr[0];
}