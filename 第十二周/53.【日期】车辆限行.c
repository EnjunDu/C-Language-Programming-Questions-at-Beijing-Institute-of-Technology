#include <stdio.h>
int sum(int y,int m,int d){
	int w=y*365+y/4-y/100+y/400;
	int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<m-1;i++){
		w+=p[i];
	}
	w+=d;
	if((y%4==0&&y%100!=0)||y%400==0){
		if(m<3){
			w-=1;
		}
	}
	return w;
}//定义一个函数，计算出当前天数到0月0日的总天数
int main()
{
	int a[2][5]={{3,4,5,1,2},{8,9,0,6,7}};
	int b[2][5]={{2,3,4,5,1},{7,8,9,0,6}};
	int c[2][5]={{1,2,3,4,5},{6,7,8,9,0}};
	int d[2][5]={{5,1,2,3,4},{0,6,7,8,9}};
	int f[2][5]={{4,5,1,2,3},{9,0,6,7,8}};
	int x,y,z,i;
	scanf("%d %d %d",&x,&y,&z);
	int n1=sum(2012,4,9);
	int n2=sum(x,y,z);
	int n=1+n2-n1;//天数差
	int s=n%7;//当前天数是星期几
	int l=n/7+1;
	int j=l/13+1;
	int g=j%5;
	if(s==0||s==6){printf("Free.\n");}
	else {
		switch (g) {
			case 4:
			printf("%d and %d.\n",d[0][s-1],d[1][s-1]);	
				break;
			case 1:
			printf("%d and %d.\n",a[0][s-1],a[1][s-1]);
				break;
			case 2:
			printf("%d and %d.\n",b[0][s-1],b[1][s-1]);
				break;
			case 3:
			printf("%d and %d.\n",c[0][s-1],c[1][s-1]);
				break;
			case 0:
			printf("%d and %d.\n",f[0][s-1],f[1][s-1]);
			break;
		}
	}
	return 0;
}
