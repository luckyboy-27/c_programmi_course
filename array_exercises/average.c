#include <stdio.h>

float compute_avg(float *arr, int length);

int main() {
    int n, i;
    float num[100];

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
    }
    printf("Average = %.2f\n", compute_avg(num, n));
    return 0;
}

float compute_avg(float *arr, int length) {
    int i, sum = 0;
    for (i = 0; i < length; ++i) {
        sum += arr[i];
    }
    return sum / length;
    
}