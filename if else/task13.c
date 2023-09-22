//write a c program to check wheather a trangle is valid or not .

#include<stdio.h>

int main(){
    int angel1;
    printf("enter angel 1 :");
    scanf("%d",&angel1);

    int angel2;
    printf("enter angel 2 :");
    scanf("%d",&angel2);

    int angel3;
    printf("enter angel 3 :");
    scanf("%d",&angel3);

    int sum;
    sum=angel1+angel2+angel3;
    printf("%d \n",sum);

    if (sum==180)
    {
        printf("it's an triangel");
    }else{
        printf("it's not a triangel");
    }
    

    return 0;
}