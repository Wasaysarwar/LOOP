#include<stdio.h>


//  write a function to upper case a lower case alphabet input through keyboard?
//A => a
char upperToLower(char alpha);
int main(){
char c;
printf("Enter any alphabet: ");
scanf("%c",&c);

char Alphabet = upperToLower(c);
printf("%c",Alphabet);

    return 0;
}

// void upperToLower(char alpha){

//     if (alpha >= 65 && alpha<=90)
//     {
//         alpha += 32;
//         // alpha = alpha+32;

//         printf("The lowerCase is %c",alpha);
    
//     } else if(alpha >= 97 && alpha <=122){
//         printf("Its already lower Case!");
//     } else{
//         printf("Its not alphabet!");
//     }
    
// }

char upperToLower (char alpha){
     if (alpha >= 65 && alpha<=90)
    {
        alpha += 32;
        // alpha = alpha+32;

        // printf("The lowerCase is %c",alpha);
    
    } else if(alpha >= 97 && alpha <=122){
        printf("Its already lower Case!\n");
    } else{
        printf("Its not alphabet!\n");
    }
    return alpha;
}