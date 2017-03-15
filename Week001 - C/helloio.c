// This is the first VERRRRY basic example of a simple program in C. This second example now includes user input with
// get_string().

#include <cs50.h>
#include <stdio.h>

int main(void){ 
    string name = get_string();
    printf("Hello, %s!\n", name);
}