//print alternate elements in array
//pass the array in function

#include<stdio.h>
void func(int*arr,int size);
int main()
{
    int arr[7]={2,5,7,1,9,5,0};
    int size=sizeof(arr)/sizeof(int);
    func(arr,size);
}
void func(int *arr,int size)
{
    for(int i=0;i<size;i+=2)
    {
        printf("\n%d",arr[i]);
    }
}
