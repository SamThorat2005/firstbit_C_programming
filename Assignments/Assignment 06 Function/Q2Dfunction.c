// 3 digit palindrome ,with parameter with return type

#include<stdio.h>
int palindrome(int num);

int main()
{
    if(palindrome(535)==0)
        printf("palindrome");
    else
        printf("not palindrome");
}

int palindrome(int num)
{
    if(num/100 == num%10)
        return 0;
    else
        return 1;
} 