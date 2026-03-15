//write a c program to convert temperature from celsius to fahrenheit using the
//formula F=(C*9/5)+32

#include<stdio.h>

int main(){
    float tempC,tempF;
    tempC=30;
    tempF=(tempC*9/5)+32;

    printf("temperature in fahrenheit will be:%f",tempF);
}