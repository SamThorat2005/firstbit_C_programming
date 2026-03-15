//print armstrong numbers in the given range 1 to n
//this is logic for printing only 3 digits armstrong number
#include<stdio.h>
int main()
{
    int range;
    printf("Enter the range:");
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        int temp=i;
        int mult=1;
        int sum=0;

        while(temp>0)
        {
            int digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}

