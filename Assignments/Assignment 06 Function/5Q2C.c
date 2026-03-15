#include<stdio.h>
void pattern(int);
int main()
{
    pattern(5);
}
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}