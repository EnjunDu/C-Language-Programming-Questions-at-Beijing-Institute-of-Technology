#include <stdio.h>
int main() {
    int year, day, month, friday_count =0;
    int k[20][20][20];
    scanf("%d", &year);
    for (month = 1; month <= 12; month++) {  // ����ÿ����
        for (day = 1; day <= 31; day++) {  // ����ÿ���������31��
            if (day == 13) {  // �ж������Ƿ�Ϊ13��
                int a = (14 - month) / 12;
                int y = year - a;
                int m = month + 12 * a - 2;
                int weekday = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
                if (weekday == 5) {  // �ж�������
                    friday_count++;
				k[friday_count][0][0]=year;
				k[0][friday_count][0]=month;
				k[0][0][friday_count]=day;
                }
            }
        }
    }
	if(friday_count==1){
		printf("There is 1 Black Friday in year %d.\nIt is:\n%d/%d/%d\n",year,k[1][0][0],k[0][1][0],k[0][0][1]);
	}
	else 
	{{
        printf("There are %d Black Fridays in year %d.\nThey are:\n", friday_count,year);
    }
    for(int i=1;i<=friday_count;i++)
    {
		printf("%d/%d/%d\n",k[i][0][0],k[0][i][0],k[0][0][i]);
	}}
    return 0;
}
