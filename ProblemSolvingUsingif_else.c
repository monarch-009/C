// Take positive integer input and tell if it is divisible by 5 or 5 but not by 15
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number:-\n");
    scanf("%d", &x);
    if (x % 3 == 0 || x % 5 == 0)
    {
        if (x % 15 != 0)
        {
            printf("The number is divisible by 5 or 3 but not by 15.\n");
        }
        else
        {
            printf("The number is divisible by 15.\n");
        }
    }
    else
    {
        printf("The number is divisible by 3 or 5.\n");
    }
    return 0;
}