//Write a program in C to find the square of any number using the function
#include<stdio.h>

int printsquare(int a);

int main(){

   int num;
   printf("Enter Any Number ");
   scanf("%d",&num);

    printsquare(num);

    return 0;
}
int printsquare(int a){
    int r;
    printf("%d",a*a);
}
