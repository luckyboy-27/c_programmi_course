#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    printf("You typed %d arguments. \n", argc);
    printf("Argument one is %s. \n", argv[0]);
    printf("press enter to clear");
    getchar();
    system("clear");
    puts("that's better");
    return 0;
}