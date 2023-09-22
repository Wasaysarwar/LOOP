//Write a C program to check whether a number is even or odd.

#include<stdio.h>

int main (){
 
 int num;
 printf("enter any number");
 scanf("%d",&num);

 if (num%2==0)
 {
    printf("it's an even number");

 }else{
    printf("its's an odd number");
     
 }

  
    return 0;
}