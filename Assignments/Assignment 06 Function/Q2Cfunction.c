// 3 digit palindrome ,with parameter without return type

#include<stdio.h>
int palindrome(int num);

int main()
{
    palindrome(676);
}
int palindrome(int num)
{

    if(num/100 == num%10)
        printf("palindrome");
    else
        printf("not palindrome");
} 