// This program uses if..else.. statements as apposed to a switch.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please give me a number between one and ten: ");
    int n = GetInt();
    
    if (n >= 1 && n <= 3)
    {
        printf("You picked a small number!\n");
    }
    else if (n >= 4 && n <= 7)
    {
        printf("You picked a medium number!!\n");
    }
    else if (n >=8 && n <= 10)
    {
        printf("You picked a large number!!\n");
    }
    else
    {
        printf("That is not a correct number!!\n");
    }
}