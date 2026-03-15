//accept array and print only prime numbers of array

#include<stdio.h>
void func(int arr[],int size);
int main()
{
    int arr[9]={1,3,5,9,0,6,19,78,97};
    int size=sizeof(arr)/sizeof(int);
    
    func(arr,size);
}
void func(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=2)
        {
            continue;
        }
        int flag=0;
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\n%d",arr[i]);
        }
    }
}