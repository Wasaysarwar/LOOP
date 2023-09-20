#include<stdio.h>



int main(){

        int sum= 0;
        int avg = 0;
    int a[3];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
       avg = i;
    }


    printf("%d\n",sum);

    printf("%d\n",sum/avg);
    

    



    return 0;
}


