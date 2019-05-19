// tags: vetor, ad-hoc, variável de controle, índice do vetor como dado

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n, b, i, j, chamada;

    while (scanf("%d %d", &n, &b) && n != 0 && b != 0) {
        int bolas[b];

        for (i = 0; i < b; i++) {
            scanf("%d", &bolas[i]);
        }
        int chamadas[n + 1];

        /*for (i = 0; i <= n; i++) {
            chamadas[i] = 0;
        }*/
        memset(chamadas, 0, sizeof(chamadas));

        for (i = 0; i < b; i++) {
            for (j = 0; j < b; j++) {
                chamada = abs(bolas[i] - bolas[j]);
                chamadas[chamada] = 1;
            }
        }

        int eh_possivel_anunciar_todas = 1;

        for (i = 0; i <= n; i++) {
            if (chamadas[i] == 0) {
                eh_possivel_anunciar_todas = 0;
                break;
            }
        }

        if (eh_possivel_anunciar_todas) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
