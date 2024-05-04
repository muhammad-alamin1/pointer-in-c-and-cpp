// pointer & array
#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = &a[0];

    printf("&a[0] = %d\n", &a[0]);
    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);

    /*ptr++;

    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);*/

    for(int i = 0; i < 5; i++){
        printf("*ptr: %d\n", *(ptr)++);
    }

    return 0;
}


