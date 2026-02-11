//print table for given number:5 

#include<stdio.h>
int main()
{
    int num=5;
    while(num<=50)
    {
        if(num%5==0)
        {
            printf("\n%d",num);
        }
        num++;
    }
}