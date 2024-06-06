#include <stdio.h>

int main() {
    int n, k;
    int a[100] = {0};
    int b[100] = {0};
    int x = -1; // 记录是否有满足条件的数字

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        int num = a[i];
        b[num]++;
    }

    for (int i = 0; i < n; i++) {
        int num = a[i];
        if (b[num] > k) {
            x = num;
            printf("%d\n", num);
            b[num] = -1000;
        }
    }

    if (x == -1) {
        printf("No such element.\n");
    }

    return 0;
}
