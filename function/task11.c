#include<stdio.h>
int printfactorial(int a);

int main(){
   
   int a;
    printfactorial(a);

    
    return 0;
}
int printfactorial(int a){
   int n;
    printf("Enter any number ");
     scanf("%d",&n);

     int factorial=1;

     int sum =1;
     int final;

     for (int i = 1; i <=n; i++)
     {
        factorial=factorial*i;
       sum=factorial;
       final=sum/n;
       
        
        
     }
     int d=factorial;
        printf("%d \n",factorial);
     
     int s=final;
     printf("%d",s);


}