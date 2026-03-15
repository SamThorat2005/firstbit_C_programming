//strpbrk() -> 2 strings madhil first matching character sangta

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    char str2[]="meena";

    char *ptr;
    ptr=strpbrk(str1,str2);

    printf("matching character:%c",*ptr);
}