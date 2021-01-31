#include <stdio.h>
#include <math.h>

//using trial division algorithms to print 1000 primes
int main() {
    int i, j;
    for (i=1; i<1000; ++i) {
        int x = 0;
        for (j=2; j<=sqrt(1000); j++) {
            if (i%j == 0) {
                x++;
            }
        } 
        if (x==0 && i>1) {
            printf("%d\t", i);
        }
    }
    putchar('\n');
    return 0;
}
