#include <stdio.h>

int main() {
    int n;  // 小红希望交换的 10 元纸币数量
    scanf("%d", &n);

    double height_1 = 0.01 * 1.8 * 10;  // 1 角硬币一摞的高度，单位为米
    double height_5 = 0.01 * 1.5 * 50;  // 5 角硬币一摞的高度，单位为米
    double height_10 = 0.01 * 2.0 * n;  // 1 元硬币一摞的高度，单位为米

    double total_height = height_1 + height_5 + height_10;  // 三摞硬币的总高度，单位为米
    int count_1 = 0, count_5 = 0, count_10 = 0;  // 1 角、5 角、1 元硬币的数量

    for (int i = 0; i <= 10000; i++) {
        double h1 = i * height_1;  // 1 角硬币摞数为 i 时的高度
        for (int j = 0; j <= 1000; j++) {
            double h5 = j * height_5;  // 5 角硬币摞数为 j 时的高度
            double h10 = total_height - h1 - h5;  // 1 元硬币摞数为总摞数减去 1 角和 5 角的摞数时的高度
            int n10 = (int)(h10 / (0.01 * 2.0));  // 1 元硬币的数量
            if (h10 - n10 * 0.01 * 2.0 > 0) {
                n10 += 1;  // 如果 1 元硬币的高度不够一整摞，则向上取整
            }
            if (n10 * 10 == n) {
                count_1 = i;
                count_5 = j;
                count_10 = n10;
                break;  // 找到一组解即可退出循环
            }
        }
        if (count_10 > 0) {
            break;  // 找到一组解即可退出循环
        }
    }

    if (count_10 == 0) {
        printf("No change.\n");
    } else {
        printf("%d,%d,%d\n", count_1, count_5, count_10);
    }

    return 0;
}
