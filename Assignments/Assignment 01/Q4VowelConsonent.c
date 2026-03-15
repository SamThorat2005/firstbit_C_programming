//Write a program to check whether a given character is a vowel or consonant.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("given character is vowel");
    }
    else
    {
        printf("given character is consonent");
    }

}