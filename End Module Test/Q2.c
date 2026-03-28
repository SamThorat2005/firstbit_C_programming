/*Write a program to accept string from user and replace one character
from special symbol*/


#include<stdio.h>
int main()
{
    char str[20];
    char ch;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Enter character for replacing:");
    scanf(" %c",&ch);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            str[i]='*';
        }
    }
    printf("%s",str);

}