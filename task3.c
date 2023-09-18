#include<stdio.h>

int main(){

    int w;
    printf("Enter Number :");
    scanf("%d",&w);

    int i=0;
    while (i<=10)
    {
        printf("%d \n",w*i);
        i++;
    }

    return 0;
}