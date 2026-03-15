// vowel or consonant,with parameter with returntype

#include<stdio.h>
int vowelconsonent(int ch);
int main()
{
    if(vowelconsonent('j')==1)
        printf("vowel");
    else
        printf("consonent");
}

int vowelconsonent(int ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else
        return 0;
}