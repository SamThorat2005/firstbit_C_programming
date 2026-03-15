/* sum of numbers in given range.find sum of numbers from 
start to end , input: start=1,end =5 */

#include<stdio.h>
int main()
{
    int sum=0;
    int num=1;

    while(num<=5)
    {
        sum=sum+num;
        printf("sum will be %d",sum );
        num++;
    }
}
