//Write a C program to input month number and print number of days in that month.

#include<stdio.h>

int main(){
    int month;
    printf("enter any month");
    scanf("%d",&month);

    if (month==1)
    {
       printf("IT'S JANUARY AND IT CONTAIN 31 DAYS");
    }else if (month==2)
    {
      printf("IT'S FEBUARAY AND IT CONTAIN 28 OR 29 DAYS");
    }else if (month==3)
    {
       printf("IT'S MARCH AND IT CONTAIN 30 DAYS");
    }
    else if (month==4)
    {
      printf("IT'S April AND IT CONTAIN 30 DAYS");
    }else if (month==5)
    {
       printf("IT'S May AND IT CONTAIN 31 DAYS");
    }
    else if (month==6)
    {
      printf("IT'S June AND IT CONTAIN 30 DAYS");
    }else if (month==7)
    {
       printf("IT'S July AND IT CONTAIN 30 DAYS");
    }
    else if (month==8)
    {
      printf("IT'S August AND IT CONTAIN  31 DAYS");
    }else if (month==9)
    {
       printf("IT'S September AND IT CONTAIN 30 DAYS");
    }
    else if (month==10)
    {
       printf("IT'S October AND IT CONTAIN 31 DAYS");
    }
    else if (month==11)
    {
       printf("IT'S November AND IT CONTAIN 30 DAYS");
    }
    else if (month==12)
    {
       printf("IT'S December AND IT CONTAIN 31 DAYS");
    }
    
    
    
    
    return 0;
}