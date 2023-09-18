// write to check if number is prime number or not

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    for(int i = 2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("Number is composite.\n");
            break;
        }
        else
            printf("Number is Prime.\n");
            break;
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
        printf("No prime No composite.\n");
    else if (a == 0)
        printf("Prime Number.\n");
    else
        printf("Composite Number.\n");
    return 0;
}
