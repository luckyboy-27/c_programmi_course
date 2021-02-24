#include<stdio.h>

int main()
{
    char str[50],ch;
    int i;
    printf("Enter String : ");
    gets(str);
      
    printf("Enter Character of which you want to kmow position : ");
    scanf("%c",&ch);
      
    for(i=0;str[i]!='\0';i++)
    {
                               
        if (str[i]==ch)
            printf("Character %c found at position %d",ch,i);
    }
    putchar('\n');
    return 0;

}