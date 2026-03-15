/* sum of numbers in given range.find sum of numbers from 
start to end , input: start=1,end =5 */

#include<stdio.h>
void func(int,int);
int main()
{
    func(0,1);
}

void func(int sum,int num)
{
    while(num<=5)
    {
        sum=sum+num;
        num++;
    }
    printf("sum will be %d",sum );
}