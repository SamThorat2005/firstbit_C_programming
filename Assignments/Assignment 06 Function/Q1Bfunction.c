//even odd , with parameter without return value

#include<stdio.h>

void evenodd(int num);
int main()
{
    evenodd(2);
}

void evenodd(int num)
{
    if(num%2==0)
        printf("Even number");
    else
        printf("odd number");
}