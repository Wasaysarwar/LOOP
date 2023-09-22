//Write a C program to input week number(1-7) and print the corresponding day of week name using if else

#include<stdio.h>

int main(){
    int week_number;
    printf("enter week number");
    scanf("%d",&week_number);

    if (week_number==1 )
    {
       printf("MONDAY");

    }else if (week_number==2)
    {
        printf("TUESDAY");
    }else if (week_number==3)
    {
       printf("WEDNESDAY");
    }else if (week_number==4)
    {
        printf("THURSDAY");
    }else if (week_number==5)
    {
       printf("FRIDAY");
    }else if (week_number==6)
    {
        printf("SATURDAY");
    }else if (week_number==7)
    {
       printf("SUNDAY");
    }
    
    
    
    
    
    
    
    return 0;
}