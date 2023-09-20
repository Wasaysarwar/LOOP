#include<stdio.h>


void swap(int a,int b);
int main(){
int a = 10;
int b = 5;

swap('a','b');


    return 0;
}


void swap(int a, int b){

    int c  = a;
    a =b;
    b =c;
    printf("%d %d ",a,b);

}