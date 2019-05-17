// tags: vetor

#include <stdio.h>

int main() {
    int X[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d\n", &X[i]);

        if (X[i] <= 0) {
            X[i] = 1;
        }

        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}



