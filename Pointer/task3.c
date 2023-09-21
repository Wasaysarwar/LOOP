#include <stdio.h>

int main()
{

    printf(" Pointer : Show the basic declaration of pointer : \n \n");

    int m = 10, n, o;

    int *z = &m;

    printf(" Here is m=10, n and o are two integer variable and *z is an integer\n\n ");

    printf("z stores the address of m  : %u \n \n ", z);

    printf("*z stores the value of m = %d\n", *z);

    printf("&m is the address of m = %u\n \n",&m);

    printf("&n stores the address of n = %u \n \n", &n);

    printf(" &o  stores the address of o= %u\n\n", &o);

    printf(" &z stores the address of z = %u", &z);

    return 0;
}