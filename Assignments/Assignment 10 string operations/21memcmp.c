//memcmp() is a function used to compare two blocks of memory.
//syntax: int memcmp(const void *ptr1, const void *ptr2, size_t n);

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    char str2[]="hello";

    int num=memcmp(str1,str2,5);

    if(num==0)
    {
        printf("same");
    }
    else
    {
        printf("different");

    }



}