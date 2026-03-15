//print perfect numbers in the given range 1 to n

#include<stdio.h>
int main()
{
    int range;
    printf("Enter the range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        int flag=0;
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
                
            }
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
        
    }
}