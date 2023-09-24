// Enter a Length:-6
// Enter a Breath:-3
// * * * * * *
// * * * * * *
// * * * * * *
#include <stdio.h>
int main()
{
    int l;
    printf("Enter a Length:-");
    scanf("%d", &l);
    int b;
    printf("Enter a Breath:-");
    scanf("%d", &b);
    // *******.....upto n number of star
    for (int i = 1; i <= b; i++) // Outer Loop --> no of Lopp
    {
        for (int i = 1; i <= l; i++) // Inner Lpop --> no of Star in Each Line
        {
            printf("* ");
        }
        printf("\n"); // For Changing line
    }
    return 0;
}