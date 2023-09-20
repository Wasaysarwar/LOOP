#include<stdio.h>
int printaverage(int a, int b, int c);

int main(){
   
   int a,b,c;
   printf("Enter Number :");
   scanf("%d",&a);

   printf("Enter Number :");
   scanf("%d",&b);

   printf("Enter Number :");
   scanf("%d",&c);
    
    int avg= printaverage(a,  b, c);
    printf("%d",avg);

    return 0;
}
int printaverage(int a, int b, int c){
      int sum = (a+b+c)%3;
      printf("%d",sum);
      }