#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d %d",&i,&n);
	for(int j=1;j<=n;j++)
	{
		printf("%d",i%10);
		i++;
	}
	printf("\n");
	for(int x=i,y=i+2*n-4,m=2;m<=n;x++,y--,m++)
	{
		for(int w=1;w<=n-m+1;w++){
			
			if(w==n-m+1){
				printf("%d\n",x%10);}
			else if(w==1&&w!=n-m+1){
				printf("%d",y%10);
			}
			else
			{
				printf(" ");
			}
		}
	}
	return 0;
}
