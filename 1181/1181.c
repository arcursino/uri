// tags: matriz, media, soma

#include<stdio.h>

int main() {
    int lin, col, linha, soma, media;
    float m[12][12];
    char t;

    scanf("%d\n", &linha);
    scanf("%s\n", &t);

    for (lin = 0; lin < 12; lin++) {
        for (col = 0; col < 12; col++){
            scanf("%f\n", &m[lin][col]);
        }
    }

    for (lin = linha; lin < 12; lin++) {
        for (col = 0; col < 12; col++){
            if (t == "S") {
                soma += m[lin][col];
                printf("%f\n", soma);
            }
            if (t == "M") {
                media = soma / 12;
                printf("%f\n", media);
            }
        }
    }

    return 0;
}
