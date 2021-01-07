#include <stdio.h>

int main() {
    int a, b;
    b = 16;
    printf("before: %d\n", b);
    //a = b++ --> only b changes, a = 16
    a = ++b; 
    //b and a change to 17
    printf("after: a = %d\n b = %d\n", a, b);
}