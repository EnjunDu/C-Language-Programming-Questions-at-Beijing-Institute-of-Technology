#include <stdio.h>

int main() {
    int y, m, d, n;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d", &n);
    int K[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int Kr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int a = (y - 1) / 4;
    int b = (y - 1) / 100;
    int c = (y - 1) / 400;
    int sum = 365 * (y - 1) + a - b + c + d;
    for (int i = 0; i < m - 1; i++) {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            sum += Kr[i];
        } else {
            sum += K[i];
        }
    }
    sum += n;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        if (m > 2) {
            sum++;
        }
    } else {
        if (m > 2) {
            sum--;
        }
    }
    int i = 1, j = y, m1;
    while ((j % 4 == 0 && j % 100 != 0 || j % 400 == 0) && sum > Kr[1] || 
           (j % 4 != 0 || j % 100 == 0 && j % 400 != 0) && sum > K[1]) {
        if (j % 4 == 0 && j % 100 != 0 || j % 400 == 0) {
            while (sum > Kr[i] && i <= 12) {
                sum -= Kr[i];
                i++;
            }
        } else {
            while (sum > K[i] && i <= 12) {
                sum -= K[i];
                i++;
            }
        }
        m1 = i;
        i = 1;
        j++;
    }
    printf("%d.%d.%d\n", j, m1, sum);
    return 0;
}
