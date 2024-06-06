#include <stdio.h>
#include <string.h>

int main() {
    char n[100] = {0}, k[100] = {0};
    int i = 0, j = 0;

    // ��ȡ�����ַ���
    scanf("%s", n);
    scanf("%s", k);

    int a = strlen(n);
    int b = strlen(k);

    // �ϲ������ַ���
    while (i < a && j < b) {
        if (n[i] <= k[j]) {
            printf("%c", n[i]);
            i++;
        } else {
            printf("%c", k[j]);
            j++;
        }
    }

    // ����ʣ���ַ�
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
