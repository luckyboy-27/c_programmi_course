#include <stdio.h>
#include <stdlib.h>

int main() {
    int *age;

    age = (int *)malloc(sizeof(int) * 1);
    if (age==NULL) {
        puts("Unable to allocate memory");
        exit(1);

    }

    printf("how old are you? ");
    scanf("%d", age);
    printf("you are %d years old. \n", *age);

    free(age);
    return 0;
}