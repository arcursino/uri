// Tags: vetor, posição

#include <stdio.h>

int main() {
    double a[100];
    int i = 0;

    while (i < 100) {
        scanf("%lf\n", &a[i]);
        i++;
    }

    for (i = 0; i < 100; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, a[i]);
        }
    }
    return 0;
}
