// This program will take the best course of action in giving change.

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int dollars;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;
    int coins = 0;
    
    //Code below asks the user for input regarding the mount of $$$
    printf("Please enter the amount of change the customer needs as $xx.xx: \n");
    change = GetFloat();
    
    // Then we convert their input to a whole number
    dollars = change * 100;
    dollars = round(dollars);
    
    //printf(" %.2f\n", dollars);
    
    // The while loop below begins the process of dividing by "quarters" aka 25 cents
    // though we have converted it to a whole
    
    while (dollars >= 25)
    {
        dollars = dollars - 25;
        quarters++;
    }
     //printf("Coins by .25 %d\n", quarters);
    
    while (dollars >= 10)
    {
        dollars = dollars - 10;
        dimes++;
    }
    //printf("Coins by .10 %d\n", dimes);
    
    while (dollars >= 5)
    {
        dollars = dollars - 5;
        nickles++;
    }
    //printf("Coins by .5 %d\n", nickles);
    
    while (dollars >= 1)
    {
        dollars = dollars - 1;
        pennies++;
    }
    
    coins =  pennies + nickles + dimes + quarters;
    
    printf("%d\n", coins);
    
    
    
}