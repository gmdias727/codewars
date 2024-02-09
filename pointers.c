#include <stdio.h>

void pointers()
{
    // Integer named x is set to 5
    int x = 5;
    printf("%d\n", x);

    // Integer pointer named pX is set to the address of x
    int *pX = &x;
    printf("%p\n", pX);

    // Integer named y is set to the thing pointed to by pX
    int y = *pX;
    printf("%d\n", y);
}