//find the given number is strong number or not
//strong number mahnje addition of factorial of each digit is number itself
//ex.145 -> 1!+4!+5!=145 so 145 is strong number

#include<stdio.h>
int main()
{
    int num=145;
    int r;
    int i;
    int fact;
    int sum=0;
    int stored_num=num;

    while(num>0)
    {
        r=num%10;
        num=num/10;
        i=1;
        fact=1;

        while(i<=r)
        {
            fact=fact*i;
            
            i++;
        }
        sum=sum+fact;
    }
       if(sum==stored_num)
        {
            printf("strong number");
        }
        else
        {
            printf("not strong number");
        }

        
    
    

    

}