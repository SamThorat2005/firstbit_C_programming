//find sum of all numbers

#include<stdio.h>

int main()
{
    int arr[5]={4,6,2,7,1};
    int size=sizeof(arr)/sizeof(int);
    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("sum:%d",sum);
}