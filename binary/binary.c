#include <stdio.h>

char *binbin(unsigned n);

int main() {
    unsigned input;

    printf("Type value from 0 to 65535: ");
    scanf("%u", &input);
    printf("%u is binary %s\n", input, binbin((unsigned char)input));
    
    return 0;
}

char *binbin(unsigned n) {
    static char bin[17];
    unsigned int x;

    for (x=0; x<16; x++) {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<=1;
    }
    bin[x] = '\0';
    return bin;
}