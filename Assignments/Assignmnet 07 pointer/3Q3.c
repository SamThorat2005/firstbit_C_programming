/* sum of numbers in given range.find sum of numbers from 
start to end , input: start=1,end =5 */

#include<stdio.h>
void func(int*,int*);
int main()
{
    int sum=0,num=1;
    func(&sum,&num);
}

void func(int* sum,int* num)
{
    while(*num<=5)
    {
        *sum=*sum+*num;
        (*num)++;
    }
    printf("sum will be %d",*sum );
}