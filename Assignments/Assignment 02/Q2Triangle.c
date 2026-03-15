/*Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the 3 sides of the triangle:");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1==s2 && s2==s3 && s1==s3)
    {
        printf("equilateral triangle");
    }
    else if(s1!=s2 && s2!=s3 && s1!=s3)
        {
            printf("scalence triangle");
        }
        else
        {
            printf("isoscalence triangle");
        }

}