#include <stdio.h>

int main() {
    char alphabet[26];
    int x;
    char *p;

    p = alphabet;
    for (x=0; x<26; x++) {
        //*p=x+'A';
        //p++;
        *p++= x+'A';
    }

    p = alphabet;

    for (x=0; x<26; x++) {
        putchar(*p);
        p++;
    }
    putchar('\n');
    return 0;
}