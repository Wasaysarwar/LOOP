//Write a C program to check whether a number is divisible by 5 and 11 by using if else.

#include<stdio.h>

int main(){ 
   int num;
   printf("enter any number");
   scanf("%d",&num);

   if (num%5 ==0 && num%11 ==0 ) 
   {
    printf("it is divisible by 5 or 11");
   }else{
      printf("it's not divisible by 5 and 11");
   }
   

    return 0;
}