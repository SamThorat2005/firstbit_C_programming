// 3 digit palindrome ,without parameter without return type

#include<stdio.h>
void palindrome();

int main()
{
    palindrome();
}

void palindrome()
{
    int num;
    printf("Enter the three digit number:");
    scanf("%d",&num);

    if(num/100 == num%10)
        printf("palindrome number");
    else
        printf("not palindrome");
}