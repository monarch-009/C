#include <stdio.h>
int main()
{
    float r;
    printf("Enter the Radius:\n");
    scanf("%f", &r);
    float pi = 3.1415;
    float area = pi * r * r;
    printf("Area of circle : %f", area);
    return 0;
}