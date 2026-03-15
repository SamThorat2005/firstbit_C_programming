//print table for given number:5 


#include<stdio.h>
void table(int);
int main()
{
   table(5); 
}
void table(int num)
{
    while(num<=50)
    {
        if(num%5==0)
        {
            printf("\n%d",num);
        }
        num++;
    }
}