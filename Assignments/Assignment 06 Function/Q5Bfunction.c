// eligible to vote , with parameter without return type

#include<stdio.h>

void vote(int age);

int main()
{
    vote(11);
}

void vote(int age)
{
    if(age>=18)
        printf("Eligible for vote");
    else
        printf("NOt Eligible for vote");
}