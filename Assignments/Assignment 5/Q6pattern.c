//print a half pyramid using numbers

#include<stdio.h>
int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}