//check the given number is prime or not, num=7,output:prime

#include<stdio.h>
void prime(int*);
int main()
{
    int num=9;
    prime(&num);
}

void prime(int* num)
{
    int i=2;
    int flag=0;
    while(i<*num)
    {
        if(*num%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("not prime");
    else
        printf("prime");
}