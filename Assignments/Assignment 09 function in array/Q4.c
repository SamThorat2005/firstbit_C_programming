//find odd and even among numbers
//pass aray in function

#include<stdio.h>
void function(int arr[],int size);
int main()
{
    int arr[5]={3,2,8,0,1};
    int size=sizeof(arr)/sizeof(int);

    function(arr,size);
}
void function(int arr[],int size)
{
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