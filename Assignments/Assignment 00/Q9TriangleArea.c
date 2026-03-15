//Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>
int main(){
    int base,height;
    float area;
    printf("Enter the base and height of the triangle:");
    scanf("%d%d",&base,&height);

    area=(height*base)/2;

    printf("the area of the triangle is %f:",area);


}