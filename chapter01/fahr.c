#include <stdio.h>

int main() {
    float fahr, celsius;
    int stop, step;

    fahr = 0;
    step = 20;
    stop = 300;

    printf(" F    C\n");
    while (fahr <= stop) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}