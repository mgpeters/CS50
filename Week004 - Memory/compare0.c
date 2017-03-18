// This program compares strings.

#include <cs50.h>
#include <stdio.h>

int main(void){

    printf("s: ");
    string s = GetString();

    printf("t: ");
    string t = GetString();

    if (s == t){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}