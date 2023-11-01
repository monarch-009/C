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
int permution(int n, int r)
{
    int npr = factorial(n) / factorial(n - r);
    return npr;
}
int main()
{
    int n, r;
    printf("Enter n:-\n");
    scanf("%d", &n);
    printf("Enter r:-");
    scanf("%d", &r);

    int npr = permution(n, r);
    printf("%d ", npr);
}