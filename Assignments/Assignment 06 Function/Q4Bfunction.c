// vowel or consonant,with parameter without returntype

#include<stdio.h>
void vowelconsonent(int ch);
int main()
{
    vowelconsonent('A');
}

void vowelconsonent(int ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("given character is vowel");
    else
        printf("given character is consonent");
}