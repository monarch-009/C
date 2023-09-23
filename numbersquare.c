// Enter a number:-
// 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:-\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)// No of lines/Rows --> i
    {
        for (int j = 1; j <= n; j++)// No of Columns --> j
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    return 0;
}
