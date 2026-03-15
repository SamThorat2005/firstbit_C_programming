//Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
int main()
{
    int hours;
    int minutes;
    printf("Enter the time in minutes:");
    scanf("%d",&minutes);

    hours=minutes/60;
    minutes=minutes%60;
    printf("given time in hours will be: %d hours",hours);
    printf("\ngiven time in minutes will be: %d minutes",minutes);
}
