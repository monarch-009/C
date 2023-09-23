// Enter no of Rows:-
// 10
// Enter no of Colums:-
// 20
// * * * * * * * * * * * * * * * * * * * *
// *                                     *
// *                                     *
// *                                     *
// *                                     *
// *                                     *
// *                                     *
// *                                     *
// *                                     *
// * * * * * * * * * * * * * * * * * * * *
#include <stdio.h>
int main()
{
    int r;
    printf("Enter no of Rows:-\n");
    scanf("%d", &r);
    int c;
    printf("Enter no of Colums:-\n");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r)
            {
                printf("* ");
            }
            else if (j == 1 || j == c)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}