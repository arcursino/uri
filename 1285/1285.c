// tags: vetor, ad-hoc, variavel de controle, índice do vetor como dado

#include <stdio.h>
#include <stdlib.h>
#define MAX 5000

int main() {
    int numero, permanece, eh_repitido, n, m, x, i, j, k;
    int numero_casa[MAX];

    while (scanf("%d %d", &n, &m) == 2) {
          permanece = 0;
          for (i = n; i <= m; i++) {
                eh_repitido = 0;
                numero = 0;
                x = i;

                while (x != 0) {
                      numero_casa[numero] = x % 10;
                      x /= 10;
                      numero = numero + 1;
                }
                for (j = 0; j < numero; j++) {
                      for (k = j+1; k < numero; k++) {
                            if (numero_casa[j] == numero_casa[k]) {
                                 eh_repitido = 1;
                            }
                      }
                }
                if (eh_repitido == 0) {
                    permanece = permanece + 1;
                }
          }
          printf("%d\n", permanece);
    }
    return 0;
}
