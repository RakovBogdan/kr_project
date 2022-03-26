#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEW_LINE '\n'

int main() {
    int character;
    long count;

    while ((character = getchar()) != EOF) {
        if (character == TAB || character == NEW_LINE || character == BLANK) {
            count++;
        }
    }

    printf("%ld\n", count);
}