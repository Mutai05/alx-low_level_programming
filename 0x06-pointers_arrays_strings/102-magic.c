#include <stdio.h>

int main(void)
{
    int a[] = {0, 1, 98, 3, 4};
    int *p;

    p = a + 2;

    printf("a[2] = %d\n", *p);

    return (0);
}
