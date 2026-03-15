//salary ,with parameter with return type

#include<stdio.h>

int salary(int);
int main()
{
    int total;
    total=salary(5000);
    printf("total salary will be:%d",total);

}

int salary(int basic)
{
    int total;
    int da,ta,hra;


    if(basic<=5000)
    {
        da=(10*basic)/100;
        ta=(20*basic)/100;
        hra=(25*basic)/100;
        total=basic+da+hra+ta;
    }
    else
    {
        da=(15*basic)/100;
        ta=(25*basic)/100;
        hra=(30*basic)/100;
        total=basic+da+hra+ta;
    }
    return total;
}

