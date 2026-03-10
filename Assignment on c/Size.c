#include<stdio.h>

int main()
{
    printf("size of int = %d \n", sizeof(int));

    printf("size of short int = %d\n", sizeof(short int));

    printf("size of long int = %ld\n", sizeof(long int));

    printf("size of long long int = %lld\n", sizeof(long long int));

    printf("size of unsigned int = %u \n", sizeof(unsigned int));

    printf("size of float = %zu\n", sizeof(float));

    printf("size of double = %zu\n", sizeof(double));

    printf("size of long double = %zu \n", sizeof(long double));

    printf("size of char = %c\n", sizeof(char));
}

/*
int, long int, unsigned int and float have same size.
unsigned int have same size as int.

*/