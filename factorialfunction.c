// factorial by Function
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number:-\n");
    scanf("%d", &n);
    int y = factorial(n);
    printf("Factorial is %d", y);
}