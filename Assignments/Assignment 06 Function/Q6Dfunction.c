// uppercase or lowercase.,with para with return

#include<stdio.h>
int character(char ch);
int main()
{
    if (character('h')==1)
        printf("uppercase");
    else
        printf("lowercase");
}

int character(char ch)
{
    if(ch>='A' && ch<='Z')
        return 1;
    else
        return 0;
}