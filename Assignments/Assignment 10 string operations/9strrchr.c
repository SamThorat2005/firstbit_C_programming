//strrchr(), it is used to find last occurence of a character//strchr() , it is used to find first occurence of a character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    printf("%s",strrchr(str,'l'));
}