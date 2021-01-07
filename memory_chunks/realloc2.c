#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char * input;
    
    input = (char *)malloc(sizeof(char) * 1024);
    if (input==NULL) {
        exit(1);
    }

    puts("type sth long and boring: ");
    fgets(input, 1024, stdin);
    //scanf("%s", input);

    int len = strlen(input);
    input = realloc(input, sizeof(char) * (len+1));
    if (input==NULL) {
        exit(1);
    }
    puts("memory reallocated");

    puts("You wrote: ");
    printf("\"%s\"\n", input);
    free(input);

    return 0;
}