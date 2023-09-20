// Write a program in C to show the simple structure of a function.
#include <stdio.h>

int printsum(int a, int b);

int main(){

   int a;
   printf("Enter Any number ");
   scanf("%d",&a);

   int b;
   printf("Enter Any number ");
   scanf("%d",&b);

 int s=   printsum( a, b);
 printf("%d",s);

    return 0;
}
int printsum(int a, int b){
   return a+b;
}