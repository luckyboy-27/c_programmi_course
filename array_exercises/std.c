#include <stdio.h>
#include <math.h>

float compute_std(float *arr, int length);

int main() {
    int n, i;
    float num[100];
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter elements %d: ", i + 1);
        scanf("%f", &num[i]);
    }
    printf("The standard deviation of the array is %f\n", compute_std(num, n));
    return 0;
}

float compute_std(float *arr, int length) {
    int i, sum = 0;
    float variance, std, mean = 0;
    for (i=0; i<length; i++) {
        sum += arr[i];
        mean += sum/length;
        variance += ((arr[i] - mean)*(arr[i] - mean))/length ;
    }
    std = sqrt(variance);
    return std;
    
}