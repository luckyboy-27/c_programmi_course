#include <stdio.h>

int main() {
    char a,b,c;
    char *p;

    p = &a;
    *p = 'A';
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'C';
    printf("know your %c%c%cs\n", a,b,c);
    printf("%c\n", *p);
}