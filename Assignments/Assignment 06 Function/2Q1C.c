/* Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
//with parameter without return type

#include<stdio.h>

void func(int *,int *,char *);
int main()
{
    int num1=2,num2=8;
    char ch='*';
    func(&num1,&num2,&ch);
}

void func(int *num1,int *num2,char *ch)
{
    int add,sub,mul,div,mod;

    if(*ch=='+')
    {
        add=*num1+*num2;
        printf("addition of %d and %d is %d",*num1,*num2,add);
    }
    else if(*ch=='-')
        {
            sub=*num1-*num2;
            printf("substraction of %d and %d is %d",*num1,*num2,sub);
        }
    else if(*ch=='*')
        {
            mul=*num1* *num2;
            printf("multiplication of %d and %d is %d",*num1,*num2,mul);
        }
    else if(*ch=='/')
        {
            div=*num1/ *num2;
            printf("division of %d and %d is %d",*num1,*num2,div);  
        }
        else if(*ch=='%')
        {
            mod=*num1 % *num2;
            printf("modulus of %d and %d is %d",*num1,*num2,mod);
        }
        else
        {
            printf("invalid character");
        }

   
}