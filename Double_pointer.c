#include <stdio.h>
int main()
{
    int a = 25;
    int *x = &a; // int* -> Store the value of int

    int **y = &x;       // int** -> Store the Value if int*
    printf("%d\n", *x); // %p is for Printing Pointer

    printf("%d\n", **y);
    return 0;
}