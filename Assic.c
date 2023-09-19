// Write a program to print all the ASCII values and their equivalent character of 26 alphabets using a while loop
#include<stdio.h>
int main()
{
    //Typecasting
    for (int i = 65; i <= 90; i++)
    {
        printf("%d ",i);
        char ch = (char)i;
        printf("%c\n",ch);
    }
    

}