#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned char *junk;
    int x;

    junk = calloc(16, sizeof(int)); // 16 ô nhớ cần tạo và kích thước mỗi ô nhớ
    if (junk==NULL) {
        exit(1);
    }

    for (x=0; x<64; x++) {
        printf("%02X ", *(junk+x));
        if ((x+1) % 8 ==0) {
            putchar('\n');
        }
    }
    free(junk);
    return 0;
}