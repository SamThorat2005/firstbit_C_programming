//check the given number is armstrong or not
//ex.153 -> 1^3+5^3+3^3

#include<stdio.h>
int main()
{
    int num=153;
    int r;
    int sum=0;
    int stored_num=num;
    

    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }

    if(sum==stored_num)
    {
        printf("no is armstrong");
    }
    else
    {
        printf("no is not armstrong");
    }
}
