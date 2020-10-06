#include <stdio.h>

int main() {
    int n, total = 0;
    scanf("%d", &n);

    while (n != 0) {
        int x = n % 10;
        total += x;
        n /= 10;
    }

    printf("%d\n", total);

    return 0;
}