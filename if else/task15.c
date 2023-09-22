#include <stdio.h>
int main(){
  int m;
  printf("enter marks:");
  scanf("%d", &m);
  if (m>=90 && m<=100)
  {
   printf("GRADE A+");
  }
  else if (m>=70 && m<=90)
  {
   printf("GRADE A");
  }
  else if (m>=30 && m<=70)
  {
   printf("GRADE B");
   
  }
  else if ( m>=1 && m<=30)
  {
   printf("GRADE C");
  }
  else{
     printf("wrong marks");
     
  }
  return 0;
  }
