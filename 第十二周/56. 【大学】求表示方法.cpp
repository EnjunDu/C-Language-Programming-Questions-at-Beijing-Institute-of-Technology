#include <stdio.h>
int countWays(int m, int n) {
    // ��ֹ�������� m �� n ���� 1 ʱ��ֻ��һ�ּӷ���ʾ
    if (m == 0 || n == 1) {
        return 1;
    }
    // ��� m С�� n����ֻ���� 1 ���
    if (m < n) {
        return countWays(m, m);
    }
    // �ݹ���� m �ж����ּӷ���ʾ
    return countWays(m, n - 1) + countWays(m - n, n);
}
int main() {
	int m,n;
    scanf("%d %d",&m,&n);
    int ways = countWays(m, n);
    printf("%d\n",ways);
    return 0;
}
