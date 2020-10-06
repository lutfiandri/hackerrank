#include <stdio.h>

void AND(int a, int b, int *maxAND, int k) {
    int x = a & b;
    if (x > *maxAND && x < k) {
        *maxAND = x;
    }
}

void OR(int a, int b, int *maxOR, int k) {
    int x = a | b;
    if (x > *maxOR && x < k) {
        *maxOR = x;
    }
}

void XOR(int a, int b, int *maxXOR, int k) {
    int x = a ^ b;
    // printf("%d xor %d = %d\n", a, b, x);
    if (x > *maxXOR && x < k) {
        *maxXOR = x;
    }
}

int main() {
    int n, k,
        maxAND = 0,
        maxOR = 0,
        maxXOR = 0;
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j < n + 1; j++) {
            // printf("%d %d\n", i, j);
            AND(i, j, &maxAND, k);
            OR(i, j, &maxOR, k);
            XOR(i, j, &maxXOR, k);
        }
    }

    printf("%d\n", maxAND);
    printf("%d\n", maxOR);
    printf("%d\n", maxXOR);

    return 0;
}