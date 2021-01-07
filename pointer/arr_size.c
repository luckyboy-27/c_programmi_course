#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "Does this string make me look fat?";

    printf("The string \"%s\" has a size of %lu.\n", string, sizeof(string));
    printf("The string \"%s\" has a size of %lu.\n", string, strlen(string));

    //the sizeof count the \0 and the strlen doesnt
    return 0;
}