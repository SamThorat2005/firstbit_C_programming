#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello";
    char str1[]="firstbit";
    strncat(str,str1,3);
    printf("%s",str);

}