#include <stdio.h>
#include <stdlib.h>

const char *myName() {
    char *name = "Vinh";
    return name;
}

int main() {
    printf("Hello %s\n", myName());
}