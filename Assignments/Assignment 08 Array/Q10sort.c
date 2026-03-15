//sort the array

#include<stdio.h>
int main()
{
    int arr[6]={3,4,1,6,7,5};
    int size=6;
    int min=arr[0];

    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }


}