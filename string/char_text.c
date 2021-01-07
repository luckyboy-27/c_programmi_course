#include <stdio.h>
#include <ctype.h>

int main() {
    char phrase[] = "Technically, a passage is simply a portion or section of a written work, either fiction or non-fiction. Some hold that a passage can be as short as a sentence"; 

    int index, alpha, space, punct;
    alpha = space = punct = 0;

    index = 0;
    while  (phrase[index]) {
        if (isalpha(phrase[index])) {
            alpha++;   
        }
        else if (isspace(phrase[index])) {
            space++;
        }
        else if (ispunct(phrase[index])) {
            punct++;
        }
        index++;
    }
    printf("\"%s\"\n", phrase);
    puts("Statistics: ");
    printf("%d alphabetic characters\n", alpha);
    printf("%d spaces\n", space);
    printf("%d punctuation symbols\n", punct);

    return 0;

}