//find minimumm and maximum number in array
//by passing arary in function

#include<stdio.h>
void func(int arr[],int size,int min,int max);
int main()
{
    int arr[5]={3,4,2,8,1};

    int size=sizeof(arr)/sizeof(int);

    int min=arr[0];
    int max=arr[0];

    func(arr,size,min,max);

}
void func(int arr[],int size,int min,int max)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("minimum element will be:%d",min);
    printf("\nmaximum element will be:%d",max);

}

