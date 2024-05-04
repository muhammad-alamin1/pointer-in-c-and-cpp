// introduction to pointer
#include <stdio.h>

int main(void)
{
    int n = 5;
    int *ptr;

    ptr = &n;

    printf("Address of n: %d\n", &n);
    printf("Value of ptr: %d\n", ptr);
    printf("Value of *ptr: %d\n", *ptr);
    printf("Value of n: %d\n", n);

    *ptr = 10;

    printf("\nAfter assign the new value: \n");
    printf("Value of *ptr: %d\n", *ptr);
    printf("Value of n: %d\n", n);

    return 0;
}
