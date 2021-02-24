#include <stdio.h>
#include <stdlib.h>

//pointer exercise -- compute sum of a bunch of number input randomly

int main() {
    int num;
    printf("Enter how many number you want to compute sum: ");
    scanf("%d", &num);
    int i, *x, sum = 0;
    x = (int *)malloc(num * sizeof(int));
    printf("Enter your number: \n");
    for (i=0; i<num; i++) {
        //Equivalent to scanf("%d", &x[i]);
        //because x is an array, if we use "x" only without any "[]" or sth else
        //it will automatically think that x = &x[0], which is am address of x
        scanf("%d", x+i);
        // Equivalent to sum += x[i], * is necessary to print the value of x+i, which is an address of the elements in x.
        sum += *(x+i);
        //with this technique *(x+i), we now can access to the array
    }
    printf("Sum of %d number is %d\n", num, sum);
    free(x);
    return 0;
}