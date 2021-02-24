#include <stdio.h>
#include <string.h>
// shift cipher
int encryption(char mess[100], int key);
int decryption(char mess[100], int key);

enum index{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};

int main() {
    char message[100], ch;
	int i, key;
	
	printf("Enter a plaintext: ");
	scanf("%s", message);
	printf("Enter key: ");
	scanf("%d", &key);
    encryption(message, key);
    putchar('\n');
    decryption(message, key);
    putchar('\n');
    return 0;
}

int encryption(char mess[100], int key) {
    int y[strlen(mess)];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    enum index x;
    for (int i=0; i<strlen(mess); i++) {
        x = i;
        y[i] = (x+key) % 26; 
    }
    for (int j=0; j<strlen(mess); j++) {
        printf("%c", alphabet[y[j]]);
    }
    return 0;
}

int decryption(char mess[100], int key) {
    int y[strlen(mess)];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    enum index p;
    int x[strlen(mess)];
    for (int i=0; i<strlen(mess); i++) {
        p = i;
        y[i] = (p+key) % 26; 
    }
    for (int i=0; i<strlen(mess); i++) {
        x[i] = (y[i]-key) % 26;
    }
    for (int j=0; j<strlen(mess); j++) {
        printf("%c", alphabet[x[j]]);
    } 
    return 0;

}