//Write a C program to check leap year using if else. How to check whether a given year is leap year or not in C programming.

#include<stdio.h>

int main(){
     
    int year;
    printf("enter any year");
    scanf("%d",&year);

    if (year %4==0 && year%100 !=0)
    {
       printf("leap year");
    }else{
        printf("it's a normal year");
    }
    
    return 0;

}