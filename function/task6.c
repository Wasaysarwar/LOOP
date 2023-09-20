#include<stdio.h>

int printcube(int num);

int main(){

  int num;
  printf("Enter Any Number ");
  scanf("%d",&num);

printcube(num);
// printf("the cube of %d : ",num,s);

    return 0;

}
int printcube(int num){
    int r;
    r=num*num*num;
    printf("%d",r);
}