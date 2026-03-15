/*Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
//with parameter without 

#include<stdio.h>
void person(int *);
int main()
{
    int peson=30;
    person(&peson);
}
void person(int *age)
{
    if(*age>=60)
        printf("senior");
    else if(*age>=20 && *age<=59)
        printf("adult");
    else if(*age>=12 && *age<=19)
        printf("teenager");       
    else
        printf("child");
           
}