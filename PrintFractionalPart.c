#include <stdio.h>
int main()
{
    float x;
    printf("Enter the value of Float x;\n");
    scanf("%f", &x);
    int y = x;
    printf("The fractional part of x is %.2f", x - y);
}