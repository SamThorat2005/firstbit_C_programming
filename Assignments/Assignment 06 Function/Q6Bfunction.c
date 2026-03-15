// uppercase or lowercase.,with para without return

#include<stdio.h>
void character(char ch);
int main()
{
    character('H');
}

void character(char ch)
{
    if(ch>='A' && ch<='Z')
        printf("given character is in uppercase");
    else
        printf("given character is in lowercase");
}