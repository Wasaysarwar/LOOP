//Write a program in C to swap two numbers using a function.
#include<stdio.h>
int printswap(int a, int b);

int main(){

   int a=5;
   printf("%d \n",a);
  
int b=6;
printf("%d \n",b);

 printswap( a, b);

    return 0;
}
int printswap(int a, int b){
    int temp;
temp = a;
a =b;
b= temp;

printf("%d\n %d",a,b);

}