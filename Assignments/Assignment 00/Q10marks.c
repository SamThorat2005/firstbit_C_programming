//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage


#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    int tm;
    int outof=500;
    float percentage;

    printf("Enter the marks of the five subject out of 100:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    
    tm=m1+m2+m3+m4+m5;
    percentage=(tm*100.0)/outof;

    printf("total percentage is:%f percent",percentage);

}