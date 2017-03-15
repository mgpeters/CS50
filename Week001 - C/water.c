// This program checks how many Liters of water are used during your shower, with the 
// input being minutes.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please input the length of your shower in minutes...\n");
    printf("Water: ");
    int x = GetInt();
    
    if (x >= 1)
    {
         printf("Bottles: %d\n", x * 192 / 16);
    }
    else
    {
        printf("Impossible!!\n");
    }
}