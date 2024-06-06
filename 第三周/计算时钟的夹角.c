#include <stdio.h>
int main()
{
	int h,m;
	scanf("%d %d",&h,&m);
	double a=h*30.0+m*0.5;
	double b=m*6.0;
	double c=fabs(a-b);
	if (c>180)
	 c=360.0-c;	
	if(m<10){printf("At %d:0%d the angle is %.1lf degrees.\n",h,m,c);}
	else 
	printf("At %d:%d the angle is %.1lf degrees.\n",h,m,c);

	return 0;
}
