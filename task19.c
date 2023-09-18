// Write a C program to input a number from user and count number of digits in the given integer using loop.
#include <stdio.h>

int main()
{

    int num, counter = 0;
    printf("Enter Any Number ");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        counter++;
    }
    printf("there are %d digits in your number", counter);

    return 0;
}
