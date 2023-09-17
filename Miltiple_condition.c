// Take positive integer input and tell if it is a three digit number or not
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a three digit Number:-\n");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("Input is correct\n");
    }
    else
    {
        printf("input is incorrect");
    }

    return 0;
}