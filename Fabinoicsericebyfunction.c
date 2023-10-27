#include <stdio.h>
int fab(int x)
{
    int a, b, sum;
    a = 1;
    b = 1;
    sum = 1;
    for (int i = 1; i <= x - 2; i++)
    {
        sum = a + b;

        a = b;
        b = sum;
    }
    return sum;
    // return sum;
}
int main()
{
    int n;
    printf("Enter a number :-");
    scanf("%d", &n);
    int y = fab(n);
    printf("fabinoic Serice is %d", y);
}