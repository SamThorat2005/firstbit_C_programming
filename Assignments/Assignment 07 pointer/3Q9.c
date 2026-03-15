//check the given number is palindrome or not
//no=121

#include<stdio.h>
void palindrome(int*);
int main()
{
    int num=121;
    palindrome(&num);
}
void palindrome(int* num)
{
    
    int r; 
    int reverse=0;
    int stored_num=*num;

    while(*num>0)
    {
        r=*num%10;
        reverse=reverse*10 + r;
        *num=*num/10;
    }
    if(reverse==stored_num)
        printf("palindrome");
    else
        printf("not palindrome");

}

