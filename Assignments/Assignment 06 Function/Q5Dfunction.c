// eligible to vote , witht parameter with return type

#include<stdio.h>

int vote(int age);

int main()
{
    if(vote(12)==1)
        printf("eligible");
    else
        printf("not eligible");
}
int vote(int age)
{
    if(age>=18)
        return 1;
    else
        return 0;
}