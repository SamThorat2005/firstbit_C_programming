/*Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail"*/

//with parameter without return type

#include<stdio.h>
void marks(int *);
int main()
{   
    int mark=88; 
    marks(&mark);
}

void marks(int *marks)
{
    if(*marks>75)
        printf("distinction");
    else if(*marks>65)
        printf("first class");   
    else if(*marks>55)
        printf("second class");
    else if(*marks>=40)
        printf("pass");
    else
        printf("fail");  
}
