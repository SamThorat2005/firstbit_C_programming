//addition of digits of the number.

#include<stdio.h>
int main()
{
    int num=2345,r1,sum=0;

    while(num>0)
    {
        r1=num%10;
        sum=sum+r1;
        num=num/10;

    }
    printf("%d",sum);
}