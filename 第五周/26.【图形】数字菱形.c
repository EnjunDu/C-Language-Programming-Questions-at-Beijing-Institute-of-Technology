#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // �������εĴ�С
    // ����ϰ벿��
    for (int i = 1; i <= n; i++) { // ��������
        for (int j = 1; j <= 2*(n - i); j++) { // ����ո�
            printf(" ");
        }
        for (int j = i; j >= 1; j--) { // �����벿��
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) { // ����Ұ벿��
            printf("%d ", j);
        }
        printf("\n"); // ����
    }
    // ����°벿��
    for (int i = n - 1; i >= 1; i--) { // ��������
        for (int j = 1; j <=2*(n - i); j++) { // ����ո�
            printf(" ");
        }
        for (int j = i; j >= 1; j--) { // �����벿��
            printf("%d ", j);
        }
        for (int j = 2; j <= i; j++) { // ����Ұ벿��
            printf("%d ", j);
        }
        printf("\n"); // ����
    }
    return 0;
}
