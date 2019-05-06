// tags: recursivo, fatorial

#include <stdio.h>

long long fat(int n);

int main() {
    int n, m;
    long long result;

    while (scanf("%d %d", &n, &m) != EOF) {
        result = fat(n) + fat(m);

        printf("%lld\n", result);
    }
}

long long fat(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fat(n - 1);

    }
}


