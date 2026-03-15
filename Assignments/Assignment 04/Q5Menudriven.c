/*write a menu driven program to take number
from user and perform operations as follows 
1.to check num is even or odd
2.to check no is prime or not
3.to check num is palinrome or not
4.to reverse a number
5.to find sum of digits*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int flag=0;
    int rem;
    int reverse=0;

    int choice;
    printf("\n........Menu..........");
    printf("\n1.check number is even or odd");
    printf("\n2.check number is prime or not");
    printf("\n3.check number is palindrome or not");
    printf("\n4.reverse a number");
    printf("\n5.find sum of digits");

    printf("\n\nEnter your choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        if(num%2==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
    }
    else if(choice==2)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("number is not prime");
        }
        else
        {
            printf("number is prime");
        }
    }
    else if(choice==3)
    {
        int temp=num;

        while(num>0)
        {
            rem=num%10;
            reverse=reverse*10+rem;
            num=num/10; 
        }
        if(temp==reverse)
        {
            printf("palindrome");
        }
        else
        {
            printf("not palindrome");
        }
    }
    else if(choice==4)
    {
        int temp=num;
        int remainder;
        int rev=0;

        while(num>0)
        {
            remainder=num%10;
            rev=rev*10+remainder;
            num=num/10;
        }
        printf("reverse:%d",rev);
    }
    else if(choice==5)
    {
        int temp=num;
        int rem;
        int sum=0;

        while(num>0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        printf("sum of the digits is :%d",sum);
        
    }
    else
    {
        printf("invalid choice");
    }

    

}