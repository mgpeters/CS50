// This problem creates a pyramid using hashes, dtaying within the confines of 0 to 23. It'll use a "for" loop to check and 
//pring the height of the input.

 
#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
 
    // Variables
    int height;
    int rows;
    int space;
    int hash;
 
    // confirms user integer is 0 to 23
    do
    {
        printf("Please create Mario's pyramid! Please enter height: ");
        scanf(" %d", &height);
    }
    while ((height < 0) || (height > 23));
 
    // this is the loop that will create the number of rows in the pyramid
    
    for (rows = 1; rows <= height; rows++) 
    {
        for (space = (height - rows); space > 0; space--)
        {
            printf(" "); 
        }
 
        for (hash = 1; hash <= (rows + 1); hash++)
        {   
            printf("#"); 
        }
 
        printf("\n");
    }
    return 0;
}