#include<stdio.h>
void pattern();
int main()
{
    int num=5;
   pattern(&num);
}
void pattern(int* n)
{
     for(int i=1;i<=*n;i++)
    {
        for(int j=1;j<=*n;j++)
        {
            if(i==1 || i==2 && j<=4 || i==3 && j<=3 || i==4 && j<=2 || i==5 && j==1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}