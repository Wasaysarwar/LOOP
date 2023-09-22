//Write a C program to input a character from user and check whether the given character is alphabet or not using if else.

#include<stdio.h>

int main(){
    char ch;
    printf("enter any character");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("it's an alphabet");

    }else{
        printf("it's not an alphabet");
    }
    
    return 0;
}