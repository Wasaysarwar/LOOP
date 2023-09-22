//Write a C program to check positive, negative or zero using simple if or if else

#include<stdio.h>

int main (){

 int num;
 printf("enter any number");
 scanf("%d",&num);

 if (num<0)
 {
    printf("it's negative");
 }else{
    if (num>0)
    {
        printf("it's positive");
    }else{
        if (num==0)
        {
            printf("it's zero");
        }
        
    }
    
 }
 


    return 0;

}