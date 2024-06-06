#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=n-1;
	int y=(2*x-1)*pow(2,x)+2;//计算思维推导过程附于编程第七周文件夹内
	if(y==1){printf("The monkey got 1 peach in first day.\n");}
	else
	printf("The monkey got %d peaches in first day.\n",y);
	return 0;
}
