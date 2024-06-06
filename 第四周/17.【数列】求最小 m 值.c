#include <stdio.h>
int main()
{
	int i,x=0,n,m=0;
	scanf("%d",&n);
	for (i=1;i>-1;i++){
		x=x+i;
		m++;
		if(x>=n){
		  i=-2;
		}
	}
	printf("%d\n",m);
	return 0;
}
