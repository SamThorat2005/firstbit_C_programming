// uppercase or lowercase.,without para with return

#include<stdio.h>
int character();
int main()
{
    if(character()==1)
        printf("uppercase");
    else
        printf("lowercase");

}

int character()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        return 1;
    else
        return 0;
}