#include <stdio.h>

int main() {
    float fahr, celsius;
    int stop, step;

    celsius = 0;
    step = 5;
    stop = 60;

    printf(" C    F\n");
    while (celsius <= stop) {
        fahr = celsius / (5.0/9.0) + 32.0;
        printf("%3.0f%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}