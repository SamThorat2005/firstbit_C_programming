//memset() ->used to fill a block of memory with a specific value.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello";
    memset(str,'*',3);
    printf("%s",str);
}