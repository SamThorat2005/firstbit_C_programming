//sort the array

#include<stdio.h>
void func(int *arr,int size);
int main()
{
    int arr[6]={3,4,1,6,7,5};
    int size=6;

    func(arr,size);
}
void func(int *arr,int size)
{
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