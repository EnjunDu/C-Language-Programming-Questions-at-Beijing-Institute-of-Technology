#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j,x;
    // ����n��ֵ
    scanf("%d",&n);

    // ��ӡ�ϰ벿��
    for (i=1;i<=n;i++) {
        // ��ӡ�ո�
        for (j=1;j<=n-i;j++)
		 {
            printf("  ");
        }

        // ��ӡ����
        for(j=1;j<=2*i-1;j++) 
		{   if(j<=i){
            x=n+1-j; // �����λ�ö�Ӧ������
            printf("%-2d",x); }// ������������
            if(j>i){
				x=n+1-2*i+j;
			printf("%-2d",x);
			}
        }

        // ����
        printf("\n");
    }

    // ��ӡ�°벿��
    for (i=n-1;i>=1;i--) {
        // ��ӡ�ո�
        for (j=1;j<=n-i;j++) {
            printf("  ");
        }

        // ��ӡ����
        for (j=1;j<=2*i-1;j++) {
           if(j<=i){
		    x=n+1-j;
			printf("%-2d",x);
			}
			else{
			x=n-2*i+1+j;
			printf("%-2d",x);
			}
        }

        // ����
        printf("\n");
    }

    return 0;
}
