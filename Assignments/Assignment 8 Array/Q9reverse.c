//reverse the array

#include<stdio.h>
int main()
{
    int arr[]={2,4,1,6,4,7};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size/2;i++)
    {

        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    
    }
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
    
    

}