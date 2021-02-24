#include <stdio.h>

int main() {
    char alpha = 'A';
    int x;
    char *p;

    p = &alpha;

    for (x=0; x<26; x++) {
        putchar((*p)++);
    }
    putchar('\n');
    return 0;
}