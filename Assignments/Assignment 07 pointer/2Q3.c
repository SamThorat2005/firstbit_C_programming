/*Write a program to find greatest of three numbers using nested if-else.*/

#include<stdio.h>
void greatest(int *,int *,int *);
int main()
{
    int num1=2,num2=4,num3=6;
    greatest(&num1,&num2,&num3);
}

void greatest(int *num1,int *num2,int *num3)
{
    if(*num1>*num2)
        if(*num1>*num3)
            printf("%d is greatest",*num1);
        else
            printf("%d is greatest",*num3);
    else

        if(*num2>*num3)
            printf("%d is greatest",*num2);
        else
            printf("%d is greatest",*num3);
}
