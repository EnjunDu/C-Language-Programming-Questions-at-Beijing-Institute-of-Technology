#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j,x;
    // 读入n的值
    scanf("%d",&n);

    // 打印上半部分
    for (i=1;i<=n;i++) {
        // 打印空格
        for (j=1;j<=n-i;j++)
		 {
            printf("  ");
        }

        // 打印数字
        for(j=1;j<=2*i-1;j++) 
		{   if(j<=i){
            x=n+1-j; // 计算该位置对应的数字
            printf("%-2d",x); }// 左对齐输出数字
            if(j>i){
				x=n+1-2*i+j;
			printf("%-2d",x);
			}
        }

        // 换行
        printf("\n");
    }

    // 打印下半部分
    for (i=n-1;i>=1;i--) {
        // 打印空格
        for (j=1;j<=n-i;j++) {
            printf("  ");
        }

        // 打印数字
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

        // 换行
        printf("\n");
    }

    return 0;
}
