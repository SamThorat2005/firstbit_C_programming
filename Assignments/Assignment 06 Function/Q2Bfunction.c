// 3 digit palindrome ,without parameter with return type

#include<stdio.h>
int palindrome();

int main()
{
    if(palindrome()==0)
        printf("palindrome");
    else
        printf("not palindrome");
}

int palindrome()
{
    int num;
    printf("Enter the three digit number:");
    scanf("%d",&num);

    if(num/100 == num%10)
        return 0;
    else
        return 1;
} 