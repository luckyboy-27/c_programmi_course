#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encryption(char mess[100], char key[100]);
int decryption(char mess[100], char key[100]);

//enum index{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};

int main() {
    int i, j;
    char message[100];
    char key[100];
    char newKey[strlen(message)];
    char option[100];
    //generating new key
    for(i = 0, j = 0; i < strlen(message); ++i, ++j){
        if(j == strlen(key))
            j = 0;
        newKey[i] = key[j];
    }
    newKey[i] = '\0';

    printf("enter e for encrypt and d for decrypt: ");
    scanf("%s", option);
    if (strcmp(option, "e")==0) 
    {
        printf("enter a plaintext: ");
        scanf("%s", message);
        printf("enter a key: ");
        scanf("%s", key);
        printf("encrypted message: ");
        encryption(message, newKey);
    }
    else if (strcmp(option,"d")==0)
    {
        printf("enter a cipher text: ");
        scanf("%s", message);
        printf("enter a key: ");
        scanf("%s", key);
        printf("decrypted message: ");
        decryption(message, newKey);
    }
    putchar('\n');
    return 0;

}

int encryption(char mess[], char key[]) {
    int num[strlen(mess)];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<strlen(mess); i++) {
        num[i] = (mess[i] + key[i]) % 26; 
    }
    for (int j=0; j<strlen(mess); j++) {
        printf("%c", alphabet[num[j]]);
    }
    return 0;
}

int decryption(char mess[], char key[]) {
    int num[strlen(mess)];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<strlen(mess); i++) {
        num[i] = (mess[i] - key[i] + 26) % 26; 
    }
    for (int j=0; j<strlen(mess); j++) {
        printf("%c", alphabet[num[j]]);
    }
    return 0;
}

