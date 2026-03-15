//strcpy() function is used to copy string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Firstbit";
    char str1[9];
    strcpy(str1,str);
    printf("%s",str1);
}