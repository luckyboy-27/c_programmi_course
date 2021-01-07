#include <stdio.h>

int main() {
    char name[16];

    printf("what is your name? ");
    fgets(name, 16, stdin);
    //printf("Pleased to meet you, %s\n", name);
    for (int i=0; i<5; i++) {
        printf("%c\n", name[i]);
    }
    return 0;
}