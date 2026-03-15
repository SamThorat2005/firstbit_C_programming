//print numbers from 1 to 10
//with parameter without return type
//use pointer

#include<stdio.h>
void numbers(int* num);
int main()
{
    int num=1;
    numbers(&num);
}
void numbers(int* num)
{
    while(*num<=10)
    {
        printf("\n%d",*num);
        (*num)++;
    }
}