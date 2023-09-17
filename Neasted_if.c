#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            printf("Number is divisible by 3 and 5\n");
        }
        else
        {
            printf("Number is not divisible by 3 and 5\n");
        }
    }
    else
    {
        printf("Number is not divisible by 3 and 5\n");
    }
    return 0;
}