#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);

    // ���㹫Ԫ1�굽�������ڵ�����
    int days = (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    // ������������������ݵĵ�һ�������ڼ�
    int first_day = (days + 1) % 7;

    // �������飬��¼ÿ���µ�����
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // ��������꣬�޸Ķ��µ�����
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
        month_days[1] = 29;
    }

    // ����������������һ��ĵڼ���
    int day_count = d;
    for (int i = 0; i < m - 1; i++) {
        day_count += month_days[i];
    }

    // �����������������ڼ�
    int day_of_week = (first_day + day_count - 1) % 7;
    printf("%d\n", day_of_week);
    return 0;
}
