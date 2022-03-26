#include <stdio.h>

int main() {
    int character, blank_count, other_char_count;
    int digits_count[10];

    blank_count = other_char_count = 0;

    for (int i = 0; i < 10; ++i) {
        digits_count[i] = 0;
    }


    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9') {
            digits_count[character - '0']++;
        } else if (character == '\t' || character == '\n' || character == ' ') {
            blank_count++;
        } else {
            other_char_count++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d:%d ", i, digits_count[i]);
    }

    printf("\nblank_count: %d; other_char_count: %d\n", blank_count, other_char_count);
}