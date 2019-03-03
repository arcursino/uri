#include <stdio.h>

int main() {
    float a;
    float PI = 3.14159;

    scanf("%f", &a);
    scanf("%f", &PI);

    printf("A=%.4f\n", PI * (a * a));
}
