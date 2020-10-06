#include <stdio.h>

void optionalPrinting(int x) {
    if (x == 1) {
        printf("one");
    } else if (x == 2) {
        printf("two");
    } else if (x == 3) {
        printf("three");
    } else if (x == 4) {
        printf("four");
    } else if (x == 5) {
        printf("five");
    } else if (x == 6) {
        printf("six");
    } else if (x == 7) {
        printf("seven");
    } else if (x == 8) {
        printf("eight");
    } else if (x == 9) {
        printf("nine");
    } else if (x % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }

    printf("\n");
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {
        optionalPrinting(i);
    }

    return 0;
}
