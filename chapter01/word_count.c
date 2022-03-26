#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int character_count, word_count, line_count, state, character;

    state = OUT;
    character_count = word_count = line_count = 0;

    while ((character = getchar()) != EOF) {
        ++character_count;
        if (character == '\n') {
            ++line_count;
        }

        if (character == ' ' || character == '\t' || character == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++word_count;
        }
    }

    printf("lines:%d words:%d characters:%d\n", line_count, word_count, character_count);
}