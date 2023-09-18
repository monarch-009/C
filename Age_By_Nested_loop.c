//Write a program to tell who is youger in three friends
#include <stdio.h>
int main()
{
    int a, b, c;
    //Take input
    printf("Enter the age of Ram:- ");
    scanf("%d", &a);
    printf("Enter the age of Shyam:- ");
    scanf("%d", &b);
    printf("Enter the age of Ajay:- ");
    scanf("%d", &c);

    if (a < b && a < c)
        printf("Ram is younger.");
    else if (b < a && b < c)
    {
        printf("Shyam is younger.");
    }
    else
        printf("Ajay is younger.");
    return 0;
}