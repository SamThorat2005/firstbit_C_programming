//salary , with parameter without return type

#include<stdio.h>
void salary(int basic);
int main()
{
    salary(50000);
}

void salary(int basic)
{
    int total;
    int da,ta,hra;


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

