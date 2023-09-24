// Enter a Number:-10
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 
// 1 3 5 7 9 
// 1 3 5 7 9 11 
// 1 3 5 7 9 11 13 
// 1 3 5 7 9 11 13 15 
// 1 3 5 7 9 11 13 15 17 
// 1 3 5 7 9 11 13 15 17 19
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number:-");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        for (int j = 1; j <= i; j = j + 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}