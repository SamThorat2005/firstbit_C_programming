//check the given no is perfect or not,i/p:n=28
//perfect number mhanje tya no chya divisors chi addition toch no yeto
//ex.28 , divisors are:1,2,4,7,14  then 1+2+4+7+14=28 so perfect no

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i=1;
    int sum=0;

    printf("divisors of %d are:",num);

    while(i<num)
    {
        if(num%i==0)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
        i++;
    }
    if(sum==num)
    {
        printf("\nno is perfect");
    }
    else
    {
        printf("no is not perfect");
    }
}