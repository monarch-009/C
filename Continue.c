// write a program  to print odd number from 1 to 100
/*#include<stdio.h>
int main()
{
    for (int i = 0; i <=  100; i++)
    {
        if (i%2 ==0)//even
        {                   //i is a factor of n
            continue;
        }
        printf("%d ",i);

    }
    return 0;

}*/

// Write a program  to print odd number from 1 to 100
#include <stdio.h>
int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (i % 2 != 0) // even
        {               // i is a factor of n
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
