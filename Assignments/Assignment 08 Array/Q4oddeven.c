//find odd and even among numbers

#include<stdio.h>
int main()
{
    int arr[5]={3,2,8,0,1};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\neven:%d",arr[i]);
        }
        else
        {
            printf("\nodd:%d",arr[i]);
        }
    }


}