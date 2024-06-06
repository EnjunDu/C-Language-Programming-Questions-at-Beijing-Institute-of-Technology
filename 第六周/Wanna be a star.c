#include <stdio.h>
int main()
{
	int n[10];
	int sum=0;
	for(int i=0;i<=9;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int j=0;j<=9;j++)
	{   for(int y=0;y<=8;y++)
			if(n[y]>n[y+1])
			{
			int temp=n[y];
			n[y]=n[y+1];
			n[y+1]=temp;
			}	
	}
	for(int k=1;k<=8;k++){
	sum+=n[k];
	}
	int ave=sum/8;
	printf("Canceled Max Score:%d\n",n[9]);
	printf("Canceled Min Score:%d\n",n[0]);
	printf("Average Score:%d\n",ave);
	return 0;
}
