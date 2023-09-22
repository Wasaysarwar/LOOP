//Write a C program to find maximum between three numbers.

#include<stdio.h>

int main(){
    int num1;
    printf("enter first number");
    scanf("%d",&num1);

    int num2;
    printf("enter second number :");
    scanf("%d",&num2);

    int num3;
    printf("enter third number :");
    scanf("%d",&num3);

  
   if (num1>num2)
   {
    if (num1>num3)
    {
        printf("maximum :num1");
    }
    else
    {
        printf("maximum : num3");
    }
    
   }else{
    if (num2>num3)
    {
       printf("maximum : num2");
    }else{
        printf("maximum :num3");
    }
    
    
   }
   
   return 0;
} 