#include <stdio.h>

int main()
{

    int n;
    do
    {
        printf("Enter Number :", n);
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);

    printf("It's An Odd");

    return 0;
}