/*
Print the given pattern
A B C D
A B C D
A B C D
A B C D
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}