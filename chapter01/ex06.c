#include "stdio.h"

int main() {
    int result;
    result = getchar() != EOF;
    printf("%d\n", result);
}