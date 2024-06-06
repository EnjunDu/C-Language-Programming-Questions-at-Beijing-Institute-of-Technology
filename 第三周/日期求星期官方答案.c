#include <stdio.h>

int main() {
    int year, month, day;
    int w;
    scanf("%d %d %d", &year, &month, &day);

    if (month == 1 || month == 2) {
        month += 12;
        year--;
    }

    w = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400+1) % 7;//基姆拉尔森计算公式

    printf("%d\n", w);

    return 0;
}


