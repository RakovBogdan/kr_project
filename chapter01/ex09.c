#include <stdio.h>

#define BLANK ' '

int main() {
    int character;

    while ((character = getchar()) != EOF) {
        if (character == BLANK) {
            putchar(character);
            while ((character = getchar()) == BLANK) {
                ;
            }
        }
        
        putchar(character);
    }
}