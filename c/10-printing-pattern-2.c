#include <stdio.h>

int changeNegative(int i) {
    int x = i;
    if (x <= 0) {
        x = 2 - i;
    }
    return x;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 1 - n; i--) {
        for (int j = n; j > 1 - n; j--) {
            int ii = changeNegative(i);
            int jj = changeNegative(j);
            if (ii >= jj) {
                printf("%d ", ii);
            } else {
                printf("%d ", jj);
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}