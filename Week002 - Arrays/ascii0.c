// This small program allows me to type cast an int into the acii letter/char
// equivivant. (sp???)

#include <stdio.h>

int main(void){

    for (int i = 65; i < 65 +26; i++){
        printf("%c is %i\n", i, i);     // C will actually typecast the first "i" due to the %c placeholder
    }                                   // This is an implicit cast, while (char) i would be Implicit
}