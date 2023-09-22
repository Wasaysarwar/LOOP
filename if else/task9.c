//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>

int main(){
    char ch;
    printf("enter any character");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90 || ch>=96 && ch<=122)
    {
      printf("it's an alphabet");
    }else if (ch>=45 && ch<=58)
    {
        printf("it's a digit");
    }else{
        printf("it's an special character");
    }
    
    
    return 0;
}