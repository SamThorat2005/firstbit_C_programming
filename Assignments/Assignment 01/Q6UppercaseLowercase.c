//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("given character is in uppercase");
    }
    else
    {
        printf("given character is in lowercase");
    }
}