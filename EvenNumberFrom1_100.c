// Print all the even number from 1 to 100...

// 1st way

/*#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
    return 0;
}*/

// 2nd way

#include <stdio.h>
int main()
{
    int i;
    for (i = 2; i <= 100; i++)
    {
        printf("%d\n", i++);
    }
    return 0;
}
