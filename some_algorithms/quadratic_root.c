#include <stdio.h>

float quadratic(float n) {
    int num = 0;
    float x = n/2;
    for (int i=0; i<n; i++) {
        x = (x+n/x)/2;
        num++;
    }
    return x;
}

int main () {
    int n;
    scanf("%d", &n);
    printf("%f\n", quadratic(n));
    return 0;
}