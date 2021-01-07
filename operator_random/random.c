#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_generator() {
    srand((unsigned)time(NULL));
    int r, a, b;
    puts("100 random numbers: ");
    for (a=0; a<20; a++) {
        for (b=0; b<5; b++) {
            r = (rand() % 20) + 1;
            printf("%d ", r);
        }
        putchar('\n');
    }
    return 0;
}

int main() {
    //unsigned seed;
    //scanf("%u", &seed);
    //srand(seed);
    random_generator();
    return 0;
}   