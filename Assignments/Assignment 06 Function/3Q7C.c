//find factorial of given number
//with parameter without return value

#include<stdio.h>
void factorial(int);
int main()
{
    factorial(3);
}
void factorial(int num)
{
    int i=1;
    int fact=1;

    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of the number %d is:%d",num,fact);
}