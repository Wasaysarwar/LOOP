#include <stdio.h>

int main()
{

    int n;
    do
    {
        printf("Enter Any Number :");
        scanf("%d", &n);

        if (n % 7 == 0)
        {
            break;
        }

    } while (1);

    printf("It's divisible by 7");

    return 0;
}