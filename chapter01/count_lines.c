#include "stdio.h"

int main() {
    int character;
    long counter;

    while ((character = getchar()) != EOF) {
        if (character == '\n') {
            ++counter;
        }
    }

    printf("%ld\n", counter);
}