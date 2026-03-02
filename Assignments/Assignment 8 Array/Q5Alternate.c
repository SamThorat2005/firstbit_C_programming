//print alternate elements in array
#include<stdio.h>
int main()
{
    int arr[7]={2,5,7,1,9,5,0};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i+=2)
    {
        printf("\n%d",arr[i]);
    }
}