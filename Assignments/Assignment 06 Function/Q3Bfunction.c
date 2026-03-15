//leap year, with parameters without return type

#include<stdio.h>
void leapyear(int year);
int main()
{
    leapyear(2024);
}

void leapyear(int year)
{
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("leap year");
    else
        printf("not leap year");
}