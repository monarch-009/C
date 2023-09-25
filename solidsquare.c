#include<stdio.h>
int main()
{
    int l ;
    printf("Enter a Lenght of Side of Square:-");
    scanf("%d",&l);
    // *******.....upto n number of star
    for (int i = 1; i <= l; i++) // Outer Loop --> no of Lopp
    {
        for (int i = 1; i <=l; i++) // Inner Lpop --> no of Star in Each Line
        {
            printf("* "); 
        }
        printf("\n");//For Changing line
        
    }
        
    return 0;
    
}