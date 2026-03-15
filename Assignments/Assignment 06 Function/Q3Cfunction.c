//leap year, without parameters with return type

#include<stdio.h>
int leapyear();
int main()
{
    
    if(leapyear()==1)
        printf("leap");
    else
        printf("not leap");
}

int leapyear()
{
    int year =2011;
    if(year%4==0 && year%100!=0 || year%400==0)
        return 1;
    else
        return 0;
}