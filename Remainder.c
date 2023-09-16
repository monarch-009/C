// Find the remainder
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    // int q = a/b;
    // int r = a-(b*q);
    // printf("Remainder is %d",r);
    int r = a % b; // By module operator
    printf("Remainder is %d", r);
}