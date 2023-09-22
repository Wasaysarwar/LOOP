// Write a C program to find maximum between two numbers using if else.

#include<stdio.h>

int main(){
      
      int a;
      printf("enter first number :");
      scanf("%d",&a);

      int b;
      printf("enter second number :");
      scanf("%d",&b);

      if (a>b)
      {
        printf("first number is larger");
      }else{
        printf("second number is larger");
      }
      
    return 0;
}