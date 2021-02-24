#include <stdio.h>

int main() {
    //pointer to string
    //const char *sample = "Hello";
    //puts(sample); --> hello
    
    //pointer to array
    char *fruit[] = {
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberry"
    };
    int x;

    for (x=0; x<7; x++) {
        putchar(**(fruit + x));
        putchar('\n');
    }
    return 0; 
}