#include <stdio.h>
#include <string.h>

int main() {
    char n[100] = {0}, k[100] = {0};
    int i = 0, j = 0;

    // 读取两个字符串
    scanf("%s", n);
    scanf("%s", k);

    int a = strlen(n);
    int b = strlen(k);

    // 合并两个字符串
    while (i < a && j < b) {
        if (n[i] <= k[j]) {
            printf("%c", n[i]);
            i++;
        } else {
            printf("%c", k[j]);
            j++;
        }
    }

    // 处理剩余字符
    while (i < a) {
        printf("%c", n[i]);
        i++;
    }
    while (j < b) {
        printf("%c", k[j]);
        j++;
    }

    printf("\n");
    return 0;
}
