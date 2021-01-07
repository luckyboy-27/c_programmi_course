#include <stdio.h>

int main() {
    struct robot {
        int alive;
        char name[30];
        int xpos;
        int ypos;
        int strength;
    };
    printf("The evil robot struct size is %lu\n", sizeof(struct robot));
    return 0;
}

//int = 4 bits
//char 1 bit of each character
// 8 bytes offset (include 5 bit of chars)