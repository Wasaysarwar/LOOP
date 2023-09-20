#include<stdio.h>

void lowertoupper(char a);
int main(){

     char ch;
     printf("enter any character");
     scanf("%c",&ch);

     lowertoupper(ch);
    return 0;
}
void lowertoupper(char a){
 if (a >=97 && a<=122)
 {
    a=a-32;
    printf("the upper case is %c\n",a);
 } else if (a>=65 && a<=97)
 {
    printf("it's already upper case %c",a);
 }else{
    printf("this is not a alphabet \n");
 }
 
 
}