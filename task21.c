#include<stdio.h>

int main(){
   
   int n,first;
   printf("Enter Number");
   scanf("%d",&n);
 first=n;
   while(first>=10)
   {
    first=first/10;
   
    
   }
   printf("first digit : %d",first);
   
    return 0;
}