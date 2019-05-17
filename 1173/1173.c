// tags: vetor

#include <stdio.h>

int main() {
    int v, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &v);
        printf("N[%d] = %d\n", i, v);
        v *= 2;
    }

    return 0;
}
