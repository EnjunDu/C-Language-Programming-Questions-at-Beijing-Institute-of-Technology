#include <stdio.h>
#include <string.h>

int main()
{
    int f[2][20], n, a, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        f[0][i] = i;
    }
    char p[n][100];
    getchar(); // 消耗输入行的换行符
    for (int i = 0; i < n; i++) {
        scanf("%[^,],%d", p[i], &f[1][i]);
        getchar(); // 消耗逗号后的换行符
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (f[1][i] < f[1][j] || (f[1][i] == f[1][j] && f[0][i] > f[0][j])) {
                a = f[1][i];
                f[1][i] = f[1][j];
                f[1][j] = a;
                temp = f[0][i];
                f[0][i] = f[0][j];
                f[0][j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int index = f[0][i];
        printf("%s,%d\n", p[index], f[1][i]);
    }
    return 0;
}
