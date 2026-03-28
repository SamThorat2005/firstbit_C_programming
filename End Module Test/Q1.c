//Write a program to print sum of prime numbers in a given range.

#include<stdio.h>
int main()
{
    int range;
    printf("Enter a range:");
    scanf("%d",&range);
    int sum=0;

    for(int i=2;i<=range;i++)
    {
        int flag=0;
        
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }    
        }
        if(flag==0)
        {
            sum=sum+i;
        }
        
    }
    printf("sum of prime numbers:%d",sum);
}