//print prime numbers in the given range 1 to n

#include<stdio.h>
void prime(int*);
int main()
{
    int num=10;
    prime(&num);
}
void prime(int *range)
{
    for(int i=2;i<=*range;i++)
    {
        int flag=0;

        for(int j=2;j<i && j>1;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }    
        }
        if(flag==0)
            printf("%d ",i);
    }  
}