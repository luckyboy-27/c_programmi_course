#include <stdio.h>
#include <math.h>

//using trial division algorithms to test the primality of a number
int main() {
    int i, num, x = 0;
    printf("Enter a number to check primality: ");
    scanf("%d", &num);
    for (i=2; i<sqrt(num); i++) {
        if (num%i == 0) {
            x++;
        }
    } 
    if (x==0) {
        printf("%d is prime\n", num);
    }
    else {
        printf("%d is not prime\n", num);
    }
}