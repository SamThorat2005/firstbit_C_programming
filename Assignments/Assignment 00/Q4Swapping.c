//write a c program to swap two numbers using a temporary third variable

#include<stdio.h>

int main(){
    int n1,n2,temp;
    n1=3;
    n2=5;

    temp=n1;
    n1=n2;
    n2=temp;
    
    printf("after swapping the value of n1 and n2 will be n1=%d and n2=%d",n1,n2);


   


}