// if cost price and selling price of an item is input through the keyboard , write a program to determine whether the seller has made profit or incurred loss .also determine how much profit he made or loss he incureed.
#include <stdio.h>
int main()
{
    int cp, sp, p, l;

    printf("Enter the Cost Price of item:- ");
    scanf("%d", &cp);

    printf("Enter the Selling Price of item:- ");
    scanf("%d", &sp);

    if (cp < sp)
    {
        p = sp - cp;
        printf("Profit of %d .\n", p);
    }
    else
    {
        l = cp - sp;
        printf("Loss of %d .\n", l);
    }
    return 0;
}