//take a two array and add sum in third array
//pass the arry to the function

#include<stdio.h>
void func(int *arr,int *brr,int *crr,int size);
int main()
{
    int arr[6]={2,4,1,5,7,4};
    int brr[6]={5,7,1,3,5,6};
    int crr[6]={};
    int size=6;

    func(arr,brr,crr,size);

}
void func(int *arr,int *brr,int *crr,int size)
{
    for(int i=0;i<size;i++)
    {
        crr[i]=arr[i]+brr[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("\n%d",crr[i]);
    }

}