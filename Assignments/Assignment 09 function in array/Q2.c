//search the given number in array
//pass the array to the 

#include<stdio.h>
void func(int arr[],int size,int num);
int main()
{
    int arr[5]={3,4,2,1,9};

    int size=sizeof(arr)/sizeof(int);
    int num;
    printf("Enter an element to search in array:");
    scanf("%d",&num);

    func(arr,size,num);
}

void func(int arr[],int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            printf("the given number %d is found at index %d",arr[i],i);
            
        }
    }
}