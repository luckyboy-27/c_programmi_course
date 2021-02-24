#include <stdio.h>
#include <stdlib.h>

int main() {
    int *age;

    age = (int *)malloc(sizeof(int) * 1);
    if (age==NULL) {
        exit(1);
    }

    scanf("%d", age);
    *age *=365;
    printf("you are over %d days old\n", *age);
    free(age);
}