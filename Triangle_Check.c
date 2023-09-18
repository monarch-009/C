// Take 3 number input and tell if they can be the side of a triangle
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the side of Triangle:-\n");
    scanf("%d%d%d", &a, &a, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("This are the Validside of triangle\n");
    }
    else
    {
        printf("not Valid Side\n");
    }
    return 0;
}