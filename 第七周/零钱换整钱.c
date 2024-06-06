#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a*10;
	int c=16;
	int d=b/c;
	if (b%c==0){
		printf("%d,%d,%d\n",d*10,d*12,d*9);
		
	}
	else
	printf("No change.\n");
	
	return 0;
	
}
