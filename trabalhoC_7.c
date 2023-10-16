#include <stdio.h>

int main() {
    char p[100];
    int i, j;
    int eP = 1;

    printf("Digite uma palavra");
    char c;
    i = 0;
    while ((c = getchar()) != '\n') {
        if (i < 99) {
            p[i++] = c;
        }
    }
    p[i] = '\0';

    j = 0;
    for (i = 0; p[i]; i++) {
        if (p[i] != ' ') {
            p[j++] = p[i];
        }
    }
    p[j] = '\0';

    for (i = 0, j = j - 1; i < j; i++, j--) {
        if (p[i] != p[j]) {
            eP = 0;
            break;
        }
    }

    if (eP) {
        printf("Palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}