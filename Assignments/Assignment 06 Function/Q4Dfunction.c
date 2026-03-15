// vowel or consonant,without parameter with returntype

#include<stdio.h>
int vowelconsonent();
int main()
{
    if(vowelconsonent()==1)
        printf("vowel");
    else
        printf("consonent");
}

int vowelconsonent()

{
    int ch='V';
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else
        return 0;
}