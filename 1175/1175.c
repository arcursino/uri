// tags: vetor

#include <stdio.h>

int main() {
    int i, n;
    int k = 0;
    int y[20] = {};

    for (i = 0; i < 20; i++) {
        scanf("%d", &y[i]);
        n += y[i];
    }

    for (i = 19; i >= 0; i--) {
        printf("N[%d] = %d\n", k, y[i]);
        k++;
    }
    return 0;
}
