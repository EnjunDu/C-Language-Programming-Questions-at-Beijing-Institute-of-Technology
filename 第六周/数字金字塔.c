#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2*n-2*i;j++)
		{
			printf(" ");
		}
		for(int h=1;h<=2*i-1;h++)
		{
			if(h<=i){printf("%2d",h);}
			if(h>i){printf("%2d",2*i-h);}
		}
		printf("\n");
	}
	return 0;
}
