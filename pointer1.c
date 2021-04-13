#include <stdio.h>

int main() {
    int x = 10;
    int y =12;
    int *a = &x;
    int *b = &x;

    printf("%p\n", a);
    printf("%d\n", *a);
    printf("%d\n", x);

    *a =133424;
    printf("%p\n", a );
    printf("%d\n", *a);
    printf("%d\n", x);

    *a = 1213;
    printf("%p\n", a);
    printf("%d\n", *a); // display variable instead of location/adress.
    printf("%d\n", x); // the value of x changes according to a (a changes -> x changes)

}