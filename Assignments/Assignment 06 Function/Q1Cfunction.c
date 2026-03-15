//without parameter with return value

#include<stdio.h>

int evenodd();

int main()
{
    if(evenodd()==1)
        printf("even");
    else
        printf("odd");
}

int evenodd()
{
    int num=2;

    if(num%2==0)
        return 1;
    else
        return 0;
}