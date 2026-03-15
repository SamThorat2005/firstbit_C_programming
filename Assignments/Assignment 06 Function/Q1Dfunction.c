//even odd with parameter with return value

#include<stdio.h>

int evenodd(int num);
int main()
{
    if(evenodd(2)==1)
        printf("even");
    else
        printf("odd");
}

int evenodd(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}