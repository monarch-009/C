#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:- \n");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("This is Even Number.\n");
    }
    else
    {
        printf("This is an Odd Number.\n");
    }
    return 0;
}