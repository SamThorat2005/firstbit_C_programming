//inverted pyramid

#include<stdio.h>
void function(int);
int main()
{
    function(5);
}
void function(int n)
{
    for(int i=5;i>=1;i--)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}