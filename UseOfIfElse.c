// Take  Positive integer input and tell if it is divisible by 5 or not 
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number:-\n");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
    return 0;

}