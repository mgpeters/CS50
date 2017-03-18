// This program compares strings, but this time uses pointers, which store the ADDRESS
// of a char in memory.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

    printf("s: ");
    char *s = GetString();

    printf("t: ");
    char *t = GetString();

    if (s != NULL && t != NULL){
        if (strcmp(s, t) == 0){
            printf("Same!!\n");
        }
        else{
            printf("Different!\n");
        }
    }
}