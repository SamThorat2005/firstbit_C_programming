// vowel or consonant,without parameter without returntype

#include<stdio.h>
void vowelconsonent();
int main()
{
    vowelconsonent();
}

void vowelconsonent()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("given character is vowel");
    else
        printf("given character is consonent");
}