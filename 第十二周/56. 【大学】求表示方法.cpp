#include <stdio.h>
int countWays(int m, int n) {
    // 终止条件：当 m 或 n 等于 1 时，只有一种加法表示
    if (m == 0 || n == 1) {
        return 1;
    }
    // 如果 m 小于 n，则只能由 1 组成
    if (m < n) {
        return countWays(m, m);
    }
    // 递归计算 m 有多少种加法表示
    return countWays(m, n - 1) + countWays(m - n, n);
}
int main() {
	int m,n;
    scanf("%d %d",&m,&n);
    int ways = countWays(m, n);
    printf("%d\n",ways);
    return 0;
}
