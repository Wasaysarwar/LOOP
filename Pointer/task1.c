#include<stdio.h>

void functionA(int *ptra,int *ptrb);

int main(){
      int a,b;
      functionA(&a,&b);
      printf("%d,%d \n",a,b);
      printf("%d,%d",&a,&b);
     

    return 0;
}

void functionA(int *ptra,int *ptrb){
     *ptra=4;
     *ptrb=5;

}