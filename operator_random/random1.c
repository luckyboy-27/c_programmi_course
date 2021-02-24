#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned)time(NULL));
    int r, a, b;
    int arr[100];
    puts("100 random numbers: ");
    for (a=0; a<20; a++) {
        for (b=0; b<5; b++) {
            r = (rand() % 20) + 1;
            r = arr[];
        }
        putchar('\n');
    }
    return 0;
}