#include <stdio.h>

int main (){
    int x [] = {};
    int y [] = {};
    int i, j;

    for (i = 0; i < 5; i++){
        scanf("%d", &x [i]);

        for (j = 0; j < 5; j++){
            scanf("%d", &y [j]);

            if (x [i] == y [j]){
                return printf("N\n");
            }
            else return printf("Y\n");
        }
    }
}
