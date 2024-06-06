#include <stdio.h>
#include <string.h>

int main() {
    int n, m[100] = {0};
    scanf("%d", &n);
    char w[100][100];

    for (int i = 0; i < n; i++) {
        scanf("%s", w[i]);
    }

    ff:for (int i = 0; i < n; i++) {
        char c[100];
        int a, b;
        scanf("%s", c);
        scanf("%d %d", &a, &b);
        if (b == 0) {
            m[i] += a;
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (strcmp(c, w[j]) == 0) {
                m[j] += (a % b - a);
                break;
            }
        }
        for (int z = 0; z < b; z++) {
            scanf("%s", c);
            for (int x = 0; x < n; x++) {
                if (strcmp(c, w[x]) == 0) {
                    m[x] += a / b;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d\n", w[i], m[i]);
    }

    return 0;
}
