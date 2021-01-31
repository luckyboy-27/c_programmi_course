#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter number of elements in your array: ");
    scanf("%d", &num);
    int i, *x;
    x = (int *)malloc(num * sizeof(int));
    printf("Enter your array: \n");
    for (i=0; i<num; i++) {
        scanf("%d", x+i);
        if (*x<*(x+i)) {
            *x = *(x+i);
        }
    }
    printf("Max number in your array is %d\n", x[0]);
    free(x);
    return 0;
}