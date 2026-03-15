//find sum of first and last digit of given number
//input:n=12345

#include<stdio.h>
int sum();
int main()
{
    sum(12345);
}
int sum(int num)
{
    int first;
    int last=num%10;
    
    while(num>=10)
    {
        num=num/10;
    }
    first=num;

    printf("sum : %d",first+last);
}
