#include <stdio.h>
int main()
{
	int y,m,d,n;
	scanf("%d %d %d",&y,&m,&d);
	scanf("%d",&n);
	int K[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Kr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int i=m-1,m1=m;
	n+=d;//����n������
	if((y%4==0&&y%100!=0||y%400==0)&&n>Kr[i]||(y%4!=0||y%100==0&&y%400!=0)&&n>K[i]){
	while((y%4==0&&y%100!=0||y%400==0)&&n>Kr[i]||(y%4!=0||y%100==0&&y%400!=0)&&n>K[i])
	{	if(y%4==0&&y%100!=0||y%400==0){
			while(n>Kr[i]&&i<=11){
					n-=Kr[i];
					i++;
				}
		}
		else {while(n>K[i]&&i<=11){
			n-=K[i];
			i++;}}
			m1=i+1;
			i=0;
			y++;
	}
		y--;
	    printf("%d.%d.%d\n",y,m1,n);}
	else 
	{printf("%d.%d.%d\n",y,m,n);}
	return 0;
}	
