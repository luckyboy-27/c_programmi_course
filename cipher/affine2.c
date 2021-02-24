#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char e, d;
    printf("Input e for encoding, d for decoding\n");
    scanf("%c", &e);
    if (e == 'e') {
        char input[100], rest[100];
        int key, dkey;
        printf("Please input the plaintext\n");
        scanf("%s",input);
        printf("Please input the key\n");
        scanf("%d", &key);

        if (key > 26) {
            key = key % 26;
        }

        dkey = 0;
        for (int i = 1; i< 26; i++) {
            if (((key * i) % 26) == 1) {
                dkey = i;
                break;
            }
        }
        if (dkey == 0) {
            printf("Not valid key\n");
        } else {
            for (int i = 0; i < strlen(input); i++) {
                int ascii = (int)input[i]-97;
                rest[i] = (ascii * key) % 26;
                printf("%c", rest[i]+97);
            }
            printf("\n");
        }
    } else {
        char input[100], rest[100];
        int key, dkey;
        printf("Please input the plaintext need to be decoded\n");
        scanf("%s",input);
        printf("Please input the key\n");
        scanf("%d", &key);
        if (key > 26) {
            key = key % 26;
        }

        //decoding
        for (int i = 1; i< 26; i++) {
            if (((key * i) % 26) == 1) {
                dkey = i;
                break;
            }
        }

        for (int i = 0; i < strlen(input); i++) {
            int ascii = (int)(input[i]) - 97;
            rest[i] = (ascii * dkey) % 26;
            printf("%c", rest[i]+97);
        }
        printf("\n"); 
    }
}
