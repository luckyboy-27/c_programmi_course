#include <stdio.h>

//Write a function to compute summation of two numbers
int sum_of_two_nums(int a, int b);

int main() {
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    printf("sum of 2 integer numbers is: %d\n", sum_of_two_nums(a, b));
    return 0;
}

int sum_of_two_nums(int a, int b) {
    return a + b;
}