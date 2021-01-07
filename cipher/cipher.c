#include<stdio.h>
#include <stdlib.h>
 
int encryption(char message[100], int key);
int decryption(char message[100], int key);

int main() {
    char message[100], ch;
	int i, key;
	
	printf("Enter a plaintext: ");
	scanf("%s", message);
	printf("Enter key: ");
	scanf("%d", &key);
    encryption(message, key);
    printf("Encrypted message: %s\n", message);
    decryption(message, key);
    printf("Decrypted message: %s\n", message);


    //printf("Enter a message to decrypt: ");
	//gets(message);
	//printf("Enter key: ");
	//scanf("%d", &key);
    return 0;
}
int encryption(char message[100], int key)
{
    char i, ch;
	for(i = 0; message[i] != '\0'; ++i) {
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
    }
    return 0;
}

int decryption(char message[100], int key) {
	int i, ch;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			message[i] = ch;
		}
	}
	return 0;
}