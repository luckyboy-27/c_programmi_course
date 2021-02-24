#include <stdio.h>

int main() {
    char a, b, c, d;
    char *p;

    a = 'B';
    b = 'O';
    c = 'S';
    d = 'S';

    printf("know your ");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    p = &d;
    putchar(*p);
    printf("\n");
    return 0;
}