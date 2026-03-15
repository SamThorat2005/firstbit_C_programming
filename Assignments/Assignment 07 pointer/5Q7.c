#include<stdio.h>
void function(int*,int*);
int main()
{
    int n=4,num=1;
    function(&n,&num);
}
void function(int* n,int* num)
{

    for(int i=1;i<=*n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",*num);
            (*num)++;
        }
        printf("\n");
        
    }
}