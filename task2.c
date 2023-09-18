#include<stdio.h>

int main(){
    

    int w;
    printf("Enter Number :");
    scanf("%d",&w);
     
     for (int i = 1; i <=10; i++)
     {
       printf("%d * %d = %d \n",w,i,w*i);
     }
     
     

    return 0;
}