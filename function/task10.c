//Write a program in C to check if a given number is even or odd using the function.
#include<stdio.h>

int printeven(int a); 

int main(){
int a;
printeven(a);
    return 0;
}
int printeven(int a){
    int n;
    
    for (int i = 1; i <=n; i++)
    {
        printf("Enter Number");
          scanf("%d",&n);
        if (n%2!=0)
        {
            printf("It's an odd number");\
            break;
        }
        printf("\n");
    }
    
}

// #include<stdio.h>

// int main (){
//     int n;

// for (int i = 1; i <=n ; i++)
// {
    
//     printf("Enter Any Number");
//     scanf("%d",&n);
//    if (n%2==0)
//    {
//     printf("Out from program\n");
//     break;
//    }
   
// }


//     return 0;
// }