#include <stdio.h>

int main() {
    double a;
    double PI = 3.14159;

    scanf("%lf", &a);

    printf("A=%.4lf\n", PI * (a * a));
}
