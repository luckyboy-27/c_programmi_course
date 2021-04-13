#include <stdio.h>

int main() {
    int number[10];
    int x;
    int *pn;

    pn = number;

    for (x=0; x<10; x++) {
        *pn = x+1; //increase value of pointer
        pn++; //increase the address
    }

    for (x=0; x<10; x++) {
        printf("numbers[%d] = %d\n", x, number[x]);
        //printf("%p\n", &number[x]);
        //printf("%lu\n", sizeof(pn));
        //printf("%d\n", *pn);
    }
    //printf("%d\n", *pn);
    return 0;
}