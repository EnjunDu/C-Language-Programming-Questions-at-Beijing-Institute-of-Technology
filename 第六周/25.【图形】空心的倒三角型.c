#include <stdio.h>
int main()
{
	int a,x;
	scanf("%d",&a);
	int n=2*a-1;
	for(int i=0;i<n;i++)
	{
		printf("*");
	}
	printf("\n");
	for(int x=1;x<a;x++){
		for (int i=0;i<n-x-1;i++){
			if(i==x){printf("*");}
			else {printf(" ");}
		}
		if(x!=a){printf("*");}
		printf("\n");
	}
	return 0;
}
