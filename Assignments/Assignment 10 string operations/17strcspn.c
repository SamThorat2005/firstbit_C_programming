//strcspn(), length of unmatching characters

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="oehello";
    char str1[]="hii";
    printf("%d",strcspn(str,str1));
}

//aadhi o check karel h,i,i sathi , not found so count 1
//mg e check karel h,i,i sathi , not found so count 2
//mg h check karel found so stop . output 2 yeil