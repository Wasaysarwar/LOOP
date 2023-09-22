//write a c program to print the c GPA .

#include<stdio.h>

int main(){
    
  int marks;
  printf("ENTER YOUR MARKS :");
  scanf("%d",&marks);

  if (marks>=85)
  {
    printf("4 GPA");
  }else if (marks>=75)
  {
   printf("3 GPA");
  }else if (marks>=65)
  {
    printf("2 GPA");
  }else if (marks>=50)
  {
    printf("1.5 GPA");
  }else{
    printf("kanger phad leina tha phale");
  }
  
  
  
  
  
    return 0;
}
