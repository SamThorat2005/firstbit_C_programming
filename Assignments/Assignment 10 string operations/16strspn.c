//strspn(), length of matching characters

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char str1[]="heii";
    printf("%d",strspn(str,str1));
}