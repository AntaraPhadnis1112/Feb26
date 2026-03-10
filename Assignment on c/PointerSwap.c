#include<stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;


    printf("Before Swap : \n");
    printf("value of x = %d \n value of y = %d \n value of z = %d \n", *px,*py,*pz);
    printf("address of px : %p\n", px);
    printf("address of py : %p\n", py);
    printf("address of pz : %p\n", pz);


    int res = *px;
    *px = *pz;
    *pz = res;

    printf("After Swap : \n");
    printf("Value of x : %d\n", *px);
    printf("Value of y : %d\n", *py);
    printf("Value of z : %d\n", *pz);

    printf("address of px : %p\n", px);
    printf("address of py : %p\n", py);
    printf("address of pz : %p\n", pz);

}