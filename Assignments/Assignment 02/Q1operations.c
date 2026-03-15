/* Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/

#include<stdio.h>
int main()
{
    int num1,num2;
    char operator;
    int add,sub,mul,div,mod;

    printf("enter the two numbers:");
    scanf("%d%d",&num1,&num2);

    printf("Enter the operator:");
    scanf(" %c",&operator);

    if(operator=='+')
    {
        add=num1+num2;
        printf("addition of %d and %d is %d",num1,num2,add);
    }
    else if(operator=='-')
        {
            sub=num1-num2;
            printf("substraction of %d and %d is %d",num1,num2,sub);
        }
        else if(operator=='*')
            {
                mul=num1*num2;
                printf("multiplication of %d and %d is %d",num1,num2,mul);
            }
            else if(operator=='/')
                {
                    div=num1/num2;
                    printf("division of %d and %d is %d",num1,num2,div);  
                }
                else if(operator=='%')
                    {
                        mod=num1%num2;
                        printf("modulus of %d and %d is %d",num1,num2,mod);
                    }
                    else
                    {
                        printf("invalid character");
                    }

   
}