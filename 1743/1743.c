// tags: iniciante, array, variável de controle
#include <stdio.h>

int main() {
    int x[5];
    int y[5];
    int i, j, plugavel;

    for (i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    for (j = 0; j < 5; j++) {
        scanf("%d", &y[j]);
    }

    plugavel = 1;
    for (i = 0; i < 5; i++) {
        if (x[i] == y[i]) {
            plugavel = 0;
            break;
        }
    }
    if (plugavel) {
        printf("Y\n");
    } else {
        printf("N\n");
    }

    return 0;
}
