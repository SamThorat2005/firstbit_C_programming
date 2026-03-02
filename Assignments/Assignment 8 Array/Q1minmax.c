//find minimummand maximum number in array

#include<stdio.h>
int main()
{
    int arr[5]={3,4,2,8,1};

    int size=sizeof(arr)/sizeof(int);

   int min=arr[0];
   int max=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[0])
        {
            min=arr[i];
        }
        if(arr[i]>arr[0])
        {
            max=arr[i];
        }
    }
    printf("minimum element will be:%d",min);
    printf("\nmaximum element will be:%d",max);

}