// This C program changes a string to capital letters.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    string s = GetString();

    if (s != NULL){

        for (int i = 0, n = strlen(s); i < n; i++){

            if (s[i] >= 'a' && s[i] <= 'z'){
                printf("%c", s[i] - 32);
            }
            else{
                printf("%c", s[i]);
            }
    
        }
        printf("\n");
    }
}