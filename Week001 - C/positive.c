// This program checks if the integer input is positive or nagative.


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do 
    {
        printf ("Please give me a positive number: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Thanks for the positive number!!!\n");
}