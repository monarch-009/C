// Enter no of Rows:-5
// *       *
//   *   *
//     *
//   *   *
// *       *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of Rows:-");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}