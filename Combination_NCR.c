#include <stdio.h>
int factorail(int x) // Function for Factorial
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r) // function for NCR
{
    int ncr = factorail(n) / (factorail(r) * factorail(n - r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter number n:-\n");
    scanf("%d", &n);
    int r;
    printf("Enter  number r:-\n");
    scanf("%d", &r);

    // int nfact = 1;
    // nfact = factorail(n);

    // int rfact = 1;
    // rfact = factorail(r);

    // int nrfact = 1;
    // nrfact = factorail(n-r);

    // int ncr = nfact/(rfact*nrfact);
    // int ncr = factorail(n)/(factorail(r)*factorail(n-r));
    int ncr = combination(n, r);
    printf("%d", ncr);
}