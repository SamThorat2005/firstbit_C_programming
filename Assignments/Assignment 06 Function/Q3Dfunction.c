//leap year, with parameters with return type

#include<stdio.h>
int leapyear(int year);
int main()
{
    
    if(leapyear(2011)==1)
        printf("leap");
    else
        printf("not leap");
}

int leapyear(int year)
{
    
    if(year%4==0 && year%100!=0 || year%400==0)
        return 1;
    else
        return 0;
}