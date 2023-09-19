// Two number are entered through the keyboard . Write a program to find the value of one number raised to the power of another.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Base\n");
    scanf("%d", &a);
    printf("Enter Exponent\n");
    scanf("%d", &b);
    int pow = 1;
    for (int i = 1; i <= b; i++)
    {
        pow = pow * a;
    }
    printf("The Power of Number is %d", pow);
    return 0;
}