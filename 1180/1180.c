// tags: vetor, menor, posição

#include<stdio.h>

int main() {
    int n, i = 0, menor, posicao_menor;


    scanf("%d\n", &n);

    int x[n];


    while (i < n) {
        scanf("%d\n", &x[i]);
        i++;
    }

    menor = x[0];
    posicao_menor = 0;

    for (i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            posicao_menor = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao_menor);
    return 0;
}
