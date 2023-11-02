#include <stdio.h>
int main()
{
    int a = 6;
    int *x = &a;
    *x = 55;           // a is changed
    printf("%p\n", x); // %p is use to print Address
    printf("%p\n", &a);
    printf("%d\n", *x);
    return 0;
}