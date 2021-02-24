#include <stdio.h>

void proc(void);

int main() {    
    puts("First Call");
    proc();
    puts("Second Call\n");
    proc();
    return 0;
}

void proc(void) {
    static int a;
    // static can declare a storage class that isn discarded when the function terminates. 
    printf("The value of variable a is %d\n", a);
    printf("Enter a new value: ");
    scanf("%d", &a);
}