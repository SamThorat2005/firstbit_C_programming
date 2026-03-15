//take a two array and add sum in third array

#include<stdio.h>
int main()
{
    int arr[6]={2,4,1,5,7,4};
    int brr[6]={5,7,1,3,5,6};
    int crr[6]={};

    int size=6;
    for(int i=0;i<size;i++)
    {
        crr[i]=arr[i]+brr[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("\n%d",crr[i]);
    }

}