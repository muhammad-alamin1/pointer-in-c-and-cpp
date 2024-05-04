// pointer arithmetic operation
#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;
    int *p, *q;

    p = &a;
    q = &b;

    printf("a = %d & b = %d\n", a, b);
    printf("*p = %d & *q = %d\n", *p, *q);
    printf("*p + *q = %d\n", *p + *q);

    (*p)++;
    (*q)--;

    printf("a = %d & b = %d\n", a, b);
    printf("*p = %d & *q = %d\n", *p, *q);
    printf("*p + *q = %d\n", *p + *q);

    *p += 3;
    *q -= 5;

    printf("a = %d & b = %d\n", a, b);
    printf("*p = %d & *q = %d\n", *p, *q);
    printf("*p + *q = %d\n", *p + *q);

    return 0;
}

