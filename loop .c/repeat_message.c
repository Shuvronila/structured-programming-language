#include <stdio.h>

int main() {
    char str[100];
    int n;

    scanf("%s", str);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", str);
    }

    return 0;
}