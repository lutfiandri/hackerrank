#include <stdio.h>
#define MAX 1024

int main() {
    char s[MAX];
    scanf("%[^\n]s", s);
    for (int i = 0; i < MAX; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            printf("%c", s[i]);
        } else if (s[i] == ' ') {
            printf("\n");
        } else {
            break;
        }
    }

    return 0;
}