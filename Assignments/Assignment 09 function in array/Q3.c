//find sum of all numbers
//pass array to function

#include<stdio.h>
void func(int *arr,int size,int sum);
int main()
{
    int arr[5]={4,6,2,7,1};
    int size=sizeof(arr)/sizeof(int);
    int sum=0;

    func(arr,size,sum);
}
void func(int *arr, int size, int sum)
{
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("sum:%d",sum);
}