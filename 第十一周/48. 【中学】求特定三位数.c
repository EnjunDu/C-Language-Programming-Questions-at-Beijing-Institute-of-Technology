#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int k[10]={0};
	int found=0;
    scanf("%d",&n);
    if(n==9){printf("0,0,0\n");
					exit(0);}
    for (int i=12;i<100;i++) {
        int x=n*100 +i;
        int y=2*x;
        int z=3*x;
        int digits[10] ={0};
        int valid=1;
        digits[n]= 1;  // ��ǵ�һ����λ�������ֳ���
        digits[x/100] = 1;  // ��ǰ�λ���ĳ���
        digits[x/10%10] = 1;  // ���ʮλ���ĳ���
        digits[x%10] = 1;  // ��Ǹ�λ���ĳ���
        digits[y/100] = 1;
        digits[y/10%10] = 1;
        digits[y%10] = 1;
        digits[z/100] = 1;
        digits[z/10%10] = 1;
        digits[z%10] = 1;
        for (int j=1;j<=9;j++) {
            if (digits[j]!=1) {
                valid=0;
                break;
            }
        }
        if (valid) {
            printf("%d,%d,%d\n", x, y, z);
            found=1;
        }
    }
    if(found==0){printf("0,0,0\n");}
    return 0;
}
