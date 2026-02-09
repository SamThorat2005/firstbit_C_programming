//print only even number from 1 to 100

#include<stdio.h>
int main()
{
    int num=1;
    while(num<=100)
    {
        if(num%2==0)
        {
            printf("\n%d",num);
            
        }
        num++;
    }

}