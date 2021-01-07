#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char original[] = "ThiS Is RANdom NoTE";
    char modified[100];
    for (int i=0; i<strlen(original); i++) {
        if (isupper(original[i])) {
            modified[i] = tolower(original[i]);
        }
        else {
            modified[i] = toupper(original[i]);
        }
    }
    printf("%s\n", modified);

}