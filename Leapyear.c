// Any year is input through the keyboard . Write a program to determine whether the year is leap year or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the year:-\n");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("This is leap Year.\n");
    }
    else
    {
        printf("This is not a leap Year.\n");
    }
    return 0;
}