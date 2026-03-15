//print numbers from 1 to 10
//with parameter without return type

#include<stdio.h>
void numbers(int);
int main()
{
    numbers(1);
}
void numbers(int num)
{
    while(num<=10)
    {
        printf("\n%d",num);
        num++;
    }
}