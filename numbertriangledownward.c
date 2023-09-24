/*Print the Given Pattern
Enter a Number:-9
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 
1 2 3 4 5 6 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}