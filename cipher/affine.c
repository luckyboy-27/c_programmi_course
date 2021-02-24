#include <stdio.h>
#include <string.h>

char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

int convertCharacter(char a);
int convertInteger(int a);
int encryption();
int decryption();

int main()
{
    char choose[100];
    printf("Please choose e for encryption or d for decryption: ");
    scanf("%s", choose);
    if (strcmp(choose, "e")==0) 
    {
        encryption();
    }
    else if (strcmp(choose,"d")==0)
    {
        decryption();
    }
    return 0;
}

int convertCharacter(char a)
{
    for (int i = 0; i < 26; i++)
    {
        if (a == alphabet[i])
        {
            return i;
        }
    }
    return -1;
}

int convertInteger(int a)
{
    return alphabet[a];
}

int inverse(int a){
    int i = 0;
    while(((i*a)%26)!=1){
            i++;
    }
    return(i);
}

int encryption()
{
    char plaintext[100];
    char key[100];
    char *p;
    int a[100];
    int k;

    printf("Please input the plaintext: \n");
    scanf("%s", plaintext);
    puts("please insert key");
    scanf("%s", key);
   
    p = key;
    k = strlen(p);
   
 
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
       
        int n = convertCharacter(plaintext[i]);

        int c = (i%k);
        
        int key1 = convertCharacter(key[c]) ;

        n = (n + key1)%26;
        
        plaintext[i] = convertInteger(n);
       
        
    }
    printf("Encrypted message: %s\n", plaintext);
    return(0);
   } 

int decryption()
{
    char cipher[100];
    char key[100];
    char *p;
    int a[100];
    int k;

    printf("Please input the ciphertext: \n");
    scanf("%s", cipher);
    puts("please insert key");
    scanf("%s", key);
   
    p = key;
    k = strlen(p);
   
 
    for (int i = 0;cipher[i] != '\0'; i++)
    {
       
        int n = convertCharacter(cipher[i]);

        int c = (i%k);
        
        int key1 = convertCharacter(key[c]) ;

        n = (n - key1 + 26)%26;
        
        cipher[i] = convertInteger(n);
       
        
    }
    printf("Encrypted message: %s\n", cipher);
    return(0);
   } 

