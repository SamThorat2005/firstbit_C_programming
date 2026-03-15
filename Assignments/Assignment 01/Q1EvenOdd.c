//Write a program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
}