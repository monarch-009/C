// Print the 'n' fibonacci Number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d", &n);
    printf("The Fabonacci number of 1 is 1\n");
    printf("The Fabonacci number of 2 is 1\n");
    int a = 1;
    int b = 1;
    int sum = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        printf("The Fabonacci number of %d is %d\n.", i + 2, sum);
        a = b;
        b = sum;
    }
    return 0;
}