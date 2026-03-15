// Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the three digit number:");
    scanf("%d",&num);

    if(num/100 == num%10){
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome");
    }
}