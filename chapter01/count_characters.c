#include <stdio.h>

int main() {
    long count;

    while (getchar() != EOF) {
        ++count;
    }

    printf("%ld\n", count);
}