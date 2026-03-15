/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/

#include<stdio.h>
int main()
{
    int basic;
    int total;
    int da,ta,hra;

    printf("Enter the basic salary:");
    scanf("%d",&basic);

    if(basic<=5000)
    {
        da=(10*basic)/100;
        ta=(20*basic)/100;
        hra=(25*basic)/100;
        total=basic+da+hra+ta;

        printf("total salary will be:%d",total);
    }
    else
    {
        da=(15*basic)/100;
        ta=(25*basic)/100;
        hra=(30*basic)/100;
        total=basic+da+hra+ta;

        printf("total salary will be:%d",total);
    }
}

