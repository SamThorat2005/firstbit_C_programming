/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
//with parameter without return type

#include<stdio.h>
void triangle(int *,int *,int *);
int main()
{
    int s1=3,s2=4,s3=5;
    triangle(&s1,&s2,&s3); 
}

void triangle(int *s1,int *s2,int *s3)
{
    if(*s1==*s2 && *s2==*s3 && *s1==*s3)
        printf("\nequilateral triangle");
    else if(*s1!=*s2 && *s2!=*s3 && *s1!=*s3)
        printf("\nscalence triangle");
    else
        printf("\nisoscalence triangle");
}