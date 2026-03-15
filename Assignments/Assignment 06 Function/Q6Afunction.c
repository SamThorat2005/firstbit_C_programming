// uppercase or lowercase.,without para without return

#include<stdio.h>
void character();
int main()
{
    character();
}

void character()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("given character is in uppercase");
    else
        printf("given character is in lowercase");
}