//pyramid

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
        //space sathi loop ahe
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        
        //star sathi loop ahe
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}