#include <stdio.h>

int main() {
    int n;  // С��ϣ�������� 10 Ԫֽ������
    scanf("%d", &n);

    double height_1 = 0.01 * 1.8 * 10;  // 1 ��Ӳ��һ���ĸ߶ȣ���λΪ��
    double height_5 = 0.01 * 1.5 * 50;  // 5 ��Ӳ��һ���ĸ߶ȣ���λΪ��
    double height_10 = 0.01 * 2.0 * n;  // 1 ԪӲ��һ���ĸ߶ȣ���λΪ��

    double total_height = height_1 + height_5 + height_10;  // ����Ӳ�ҵ��ܸ߶ȣ���λΪ��
    int count_1 = 0, count_5 = 0, count_10 = 0;  // 1 �ǡ�5 �ǡ�1 ԪӲ�ҵ�����

    for (int i = 0; i <= 10000; i++) {
        double h1 = i * height_1;  // 1 ��Ӳ������Ϊ i ʱ�ĸ߶�
        for (int j = 0; j <= 1000; j++) {
            double h5 = j * height_5;  // 5 ��Ӳ������Ϊ j ʱ�ĸ߶�
            double h10 = total_height - h1 - h5;  // 1 ԪӲ������Ϊ��������ȥ 1 �Ǻ� 5 �ǵ�����ʱ�ĸ߶�
            int n10 = (int)(h10 / (0.01 * 2.0));  // 1 ԪӲ�ҵ�����
            if (h10 - n10 * 0.01 * 2.0 > 0) {
                n10 += 1;  // ��� 1 ԪӲ�ҵĸ߶Ȳ���һ������������ȡ��
            }
            if (n10 * 10 == n) {
                count_1 = i;
                count_5 = j;
                count_10 = n10;
                break;  // �ҵ�һ��⼴���˳�ѭ��
            }
        }
        if (count_10 > 0) {
            break;  // �ҵ�һ��⼴���˳�ѭ��
        }
    }

    if (count_10 == 0) {
        printf("No change.\n");
    } else {
        printf("%d,%d,%d\n", count_1, count_5, count_10);
    }

    return 0;
}
