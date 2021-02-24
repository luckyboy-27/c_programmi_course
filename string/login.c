#include <stdio.h>
#include <string.h>

int main() {
    char pass[] = "taco";
    char input[15];
    int match;

    printf("password: ");
    scanf("%s", input);

    match = strcmp(input, pass);
    if (match==0) {
        puts("Password accepted");
    }
    else {
        puts("Invalid Password");
    }
    return 0;
}