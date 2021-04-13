#include <stdio.h>

int main() {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num%2 == 0) {
            printf("Fizz\n");
        }
        else {
            printf("Buzz\n");
        }
    }
    putchar('\n');
    return 0;
}