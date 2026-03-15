// eligible to vote , wihout parameter without return type

#include<stdio.h>
void vote();
int main()
{
    vote();
}
void vote()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("NOt Eligible for vote");
    }
}