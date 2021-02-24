#include <stdio.h>

int main() {
    int c;

    for (c=-5; c<5; c++) {
        printf("%d ", c);
    }
    printf("\n");
    for (;c>=-5;c--) {
        printf("%d ", c);
    }
    putchar('\n');
    return 0;
}