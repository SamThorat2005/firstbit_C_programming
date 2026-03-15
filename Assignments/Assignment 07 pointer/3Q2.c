//print table for given number:5 
//use pointer

#include<stdio.h>
void table(int*);
int main()
{
    int num=5;
    table(&num); 
}
void table(int* num)
{
    while(*num<=50)
    {
        if(*num%5==0)
        {
            printf("\n%d",*num);
        }
        (*num)++;
    }
}