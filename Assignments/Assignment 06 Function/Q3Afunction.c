//leap year, without parameters without return type
#include<stdio.h>
void leapyear();
int main()
{
    leapyear();
}

void leapyear()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}