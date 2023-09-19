// Print the Factorial of a given number
// OR
// Print the factorial of first n number;
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("Facorial of %d is %d.\n", i, fact);
    }
    // printf("Facorial is %d",fact);
    return 0;
}