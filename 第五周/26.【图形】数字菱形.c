#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 输入菱形的大小
    // 输出上半部分
    for (int i = 1; i <= n; i++) { // 控制行数
        for (int j = 1; j <= 2*(n - i); j++) { // 输出空格
            printf(" ");
        }
        for (int j = i; j >= 1; j--) { // 输出左半部分
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) { // 输出右半部分
            printf("%d ", j);
        }
        printf("\n"); // 换行
    }
    // 输出下半部分
    for (int i = n - 1; i >= 1; i--) { // 控制行数
        for (int j = 1; j <=2*(n - i); j++) { // 输出空格
            printf(" ");
        }
        for (int j = i; j >= 1; j--) { // 输出左半部分
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) { // 输出右半部分
            printf("%d ", j);
        }
        printf("\n"); // 换行
    }
    return 0;
}
