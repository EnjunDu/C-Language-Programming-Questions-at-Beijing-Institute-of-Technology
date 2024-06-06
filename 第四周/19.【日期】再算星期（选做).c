#include <stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	int k[12];
	{
		if (y%4==0&&y%100!=0||y%400==0) //判断是否为闰年
		 {
	    int k_values[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    for (int i = 0; i < 12; i++) {
	        k[i] = k_values[i];//定义数组
	    }
	    }
	 else 
	    {
	    int k_values[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    for (int i = 0; i < 12; i++) {
	        k[i] = k_values[i];
	    }
		}
	}
	{
	if(m<1||m>12){
		printf("month is error.\n");//先判断月份
	}
    else if(d>k[m-1]){
							printf("day is error.\n");//根据月份判断日期
						}
	else
	{
		int a=(y-1900)/4;
	int b=(y-1900)/100;
	int c=(y/400)-4;
	int n[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int total_days = 0;
	
	    for (int i = 0; i < m - 1; i++) {
	        total_days += n[i];
	    }
	    total_days += d; 
	int x=(y-1900)*365+total_days+a-b+c;
	int v=x%7;
	if (y%4==0&&y%100!=0||y%400==0){if (m>=3){	printf("%d\n",v);
	
	}
	else 
		{
			int u=x-1;
			int wtf =u%7;
			printf("%d\n",wtf);
		}
	}
	else
	printf("%d\n",v);}}
	return 0;
}
