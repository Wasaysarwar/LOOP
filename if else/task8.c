//Write a C program to check whether an alphabet is vowel or consonant using if else.

#include<stdio.h>

int main (){
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
       printf("it's a vowel");
    }else{
        printf("it's consonant sound");
    }
    
    return 0;
}