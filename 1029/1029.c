#include <stdio.h>

int count;

int fib(int x) {
    count++;
    if (x == 0 || x == 1) {
       return x;
    } else {
        return fib(x - 1) + fib(x -2);
    }
}

int main() {
    int n, x, i, result;

    scanf("%d", &n);

    i = 0;

    while (i < n) {
        count = 0;

        scanf("%d", &x);
        result = fib(x);

        printf("fib(%d) = %d calls = %d\n", x, count - 1, result);

        i++;
    }

    return 0;
}
