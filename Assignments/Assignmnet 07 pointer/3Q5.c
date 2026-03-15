//check the given number is armstrong or not
//ex.153 -> 1^3+5^3+3^3

#include<stdio.h>
void armstrong(int*);
int main()
{
    int num=153;
    armstrong(&num);
}
void armstrong(int*num)
{
    int sum=0;
    int r;
    int stored_num=*num;
    

    while(*num>0)
    {
        r=*num%10;
        sum=sum+(r*r*r);
        *num=*num/10;
    }

    if(sum==stored_num)
    {
        printf("armstrong");
    }
    else
    {
        printf("no is not armstrong");
    }
}
