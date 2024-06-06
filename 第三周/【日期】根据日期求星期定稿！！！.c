#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);

    // 计算公元1年到输入日期的天数
    int days = (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    // 计算输入日期所在年份的第一天是星期几
    int first_day = (days + 1) % 7;

    // 定义数组，记录每个月的天数
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // 如果是闰年，修改二月的天数
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
        month_days[1] = 29;
    }

    // 计算输入日期是这一年的第几天
    int day_count = d;
    for (int i = 0; i < m - 1; i++) {
        day_count += month_days[i];
    }

    // 计算输入日期是星期几
    int day_of_week = (first_day + day_count - 1) % 7;
    printf("%d\n", day_of_week);
    return 0;
}
