//C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>

int main(){
    int length,breadth;

    printf("Enter the length and breadth of the rectangle");
    scanf("%d%d",&length,&breadth);

    int perimeter=2*(length+breadth);

    printf("Area of the rectangle will be:%d", perimeter);
}