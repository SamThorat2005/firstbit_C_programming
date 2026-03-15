//search the given number in array

#include<stdio.h>
int main()
{
    int arr[5]={3,4,2,1,9};

    int size=sizeof(arr)/sizeof(int);
    int num;
    printf("Enter an element to search in array:");
    scanf("%d",&num);

    for(int i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            printf("the given number %d is found at index %d",arr[i],i);
            
        }
    }

}