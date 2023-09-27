// print the given Pattern
/*
Enter a number:-10
*
**
***
****
*****
******
*******
********
*********
**********
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}