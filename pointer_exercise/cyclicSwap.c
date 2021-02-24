#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main() {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    printf("Number before swap:\na = %d\nb = %d\nc = %d\n", a, b, c);
    cyclicSwap(&a, &b, &c);
    printf("Number after swap:\na = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}

void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}