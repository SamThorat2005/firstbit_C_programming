//print strong numbers in the given range 1 to n

#include<stdio.h>
int main()
{
    int range;
    printf("Enter the range:");
    scanf("%d",&range);
    int fact=1;
    int digit;

    for(int i=1;i<=range;i++)
    {      
        int temp=i;
        int sum=0;

        while(temp>0)
        {
            int digit=temp%10;
            int fact=1;

            for(int j=1;j<=digit;j++)
            {   
                fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;

        }
        if(sum==i)
            {
                printf("%d ",i);
            }
            

    }
}