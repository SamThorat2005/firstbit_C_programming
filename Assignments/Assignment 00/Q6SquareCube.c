// Write a C program to find the square and cube of a given number.

#include<stdio.h>
int main(){
    int num;
    int square,cube;
    printf("Enter a number:");
    scanf("%d",&num);

    square=num*num;
    cube=num*num*num;

    printf("square and cube of the number is %d and %d",square,cube);

}