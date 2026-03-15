//write a c program to input 5 numbers and find their Average

#include<stdio.h>

int main(){
    int n1,n2,n3,n4,n5;
    float Avg;
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    Avg=(n1+n2+n3+n4+n5)/5; 

    printf("Avg of all the numbers is:%f",Avg);
}