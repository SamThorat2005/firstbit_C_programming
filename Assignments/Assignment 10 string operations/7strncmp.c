//compares first n charcters 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello";
    char str1[]="hei";
    printf("%d",strncmp(str,str1,2));
}