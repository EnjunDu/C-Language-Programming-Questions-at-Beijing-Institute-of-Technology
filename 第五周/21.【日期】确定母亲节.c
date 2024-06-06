#include <stdio.h>
int main()
{
	int y,a,b,c,d,h;
	scanf("%d",&y);
	a=y/4;
	b=y/100;
	c=y/400;
	d=365*y+a-b+c+120; 
	int w=d%7;
	{if(w==0){
		h=8;
	}
	else{
		h=15-w;
	}}
	printf("%d\n",h);
	return 0;
}
