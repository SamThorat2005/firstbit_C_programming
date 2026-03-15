//strcat(),this function is use to concatenate two strings

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char str1[]="world";
    strcat(str1,str);
    printf("%s",str1);
}