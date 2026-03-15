// eligible to vote , wihout parameter with return type

#include<stdio.h>

int vote();

int main()
{
    if(vote()==1)
        printf("eligible");
    else
        printf("not eligible");
}
int vote()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);

    if(age>=18)
        return 1;
    else
        return 0;
}