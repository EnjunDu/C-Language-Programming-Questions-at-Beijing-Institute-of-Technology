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
int main(){
	int a,b,c,x,y,z,n,m,ans;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
	n=sum(x,y,z);
	m=sum(a,b,c);
	ans=n-m;
	printf("%d days\n",ans);
	return 0;
}
