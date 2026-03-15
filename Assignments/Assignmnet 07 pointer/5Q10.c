#include<stdio.h>
void pattern(int*);
int main()
{
    int num=4;
    pattern(&num);
}
void pattern(int *n)
{
    for(int i=1;i<=*n;i++)
    {
        for(int j=1;j<=*n;j++)
        {
            if((i>=2 && i<=3) && (j>=2 && j<=3) && i!=j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}