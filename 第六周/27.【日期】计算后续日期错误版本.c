#include <stdio.h>
int main()
{
	int y,m,d,n;
	scanf("%d %d %d",&y,&m,&d);
	scanf("%d",&n);
	int K[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Kr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int a=y/4;
	int b=y/100;
	int c=y/400;
	int sum=365*y+a-b+c+d;
	for(int i=0;i<m-1;i++)
	{  	sum+=K[i];}
	sum+=n;
	if(m<=2){sum--;}
	int i=0,j=0,m1;
	printf("%d\n",sum);
while((j%4==0&&j%100!=0||j%400==0)&&sum>Kr[1]||(j%4!=0||j%100==0&&j%400!=0)&&sum>K[1])
{	if(j%4==0&&j%100!=0||j%400==0){
		while(sum>Kr[i]&&i<=11){
				sum-=Kr[i];
				i++;
			}
	}
	else {while(sum>K[i]&&i<=11){
		sum-=K[i];
		i++;}}
		m1=i;
		i=0;
		j++;
}
	j--;
    printf("%d.%d.%d\n",j,m1,sum);
    return 0;
}
