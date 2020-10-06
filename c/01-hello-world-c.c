#include <stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]s", s);

    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}