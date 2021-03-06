// This program outlines how C stores strings as an array.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void){
    string s = GetString(); // Asks for string input

    if (s != NULL){ // The lecture suggests GetString can return NULL if the input is too long. This is a safeguard.
        
        for (int i = 0; i < strlen(s); i++){
            printf("%c\n", s[i]); //prints out each letter in the string
        }
    }
}