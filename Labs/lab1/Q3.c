#include<stdio.h>
int main(){
    int year=2024;

    if(year%4==0 && year%100!=0 || year%400==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}