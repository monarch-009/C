//Given the length and breadth of rectangle ,write a program to find whether the area of the rectangle is greater than its perimeter;
#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter the Length:-\n");
    scanf("%f",&l);
    printf("Enter the Breadth:-\n");
    scanf("%f",&b);
    a = l*b;
    p = 2*(l+b);
    if (a>p)
    {
        printf("Area is greater than Perimeter\n");
    }
    else
    {
        printf("Perimeter is greater than Area.\n");
    }
    return 0;

}