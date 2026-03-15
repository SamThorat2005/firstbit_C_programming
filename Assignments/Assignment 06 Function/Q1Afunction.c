//even odd without parameter without return value
#include<stdio.h>

void evenodd();

int main()

{
    evenodd();
}

void evenodd(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
}