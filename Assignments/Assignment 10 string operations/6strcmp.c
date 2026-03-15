/*strcmp is used to compare two strings.
if string are same output will be 0 else 1 */

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="hello";
    char str2[]="hello";

    printf("%d",strcmp(str1,str2));
}