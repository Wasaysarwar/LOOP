#include <stdio.h>

void print_assalamualikum();
void print_bonjour();

int main()
{

    int a;
    printf("enter digit");
    scanf("%d", &a);

    if (a == 1)
    {
        print_assalamualikum();
    }
    else
    {
        print_bonjour();
    }

    return 0;
}

void print_assalamualikum()
{
    printf("ASSALAMUALIKUM ");
}

void print_bonjour()
{
    printf("BONJOUR");
}