// tags: recursivo, fibonacci, contador, iniciante.

#include <stdio.h>

long long fib(int n);
long long memoize[61];

int main() {
    int n, t, i;

    scanf("%d", &t); // insere o número de testes

    for(i = 0; i <= 60; i++) {
        memoize[i] = -1;
    }

    for(i = 0; i < t; i++) {
        scanf("%d", &n);

        printf("Fib(%d) = %lld\n", n, fib(n));
    }
}

long long fib(int n) {
    if (memoize[n] != -1) {
        return memoize[n];
    }
    if (n == 0 || n == 1) {
        return n;

    } else {
        memoize[n] = fib(n - 1) + fib(n - 2);
    }
    return memoize[n];
}
