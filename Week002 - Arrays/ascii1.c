// This small program allows me to type cast an int into the acii letter/char
// equivivant. (sp???), but is reversed from the previous example, by iterating over char.

#include <stdio.h>

int main(void){

    for (char c = 'A'; c <= 'Z'; c++){
        printf("%c is %i\n", c, (int) c);   // This explicitly typecasts the second c as int.
    }                           
}