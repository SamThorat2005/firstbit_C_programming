//strncpy() this funtion is used to copy first n characters of string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="solutions";
    char str1[3];
    strncpy(str1,str,3);
    str1[3]='\0';
    printf("%s",str1);

    
}