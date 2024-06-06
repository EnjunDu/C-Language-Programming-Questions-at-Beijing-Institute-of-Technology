#include <stdio.h>
#include <stdlib.h>
int main()
{
	char w;
	int n,i,j;
	scanf("%c %d",&w,&n);
	for(int i=1;i<=2*n-1;i++)
	{
		for(int j=1;j<=abs(n-i);j++)
		{
			printf(" ");
		}
		if(i<=n)
		{
			if(i!=1){
				printf("%c",w);
			}
				for(int l=1;l<=2*i-3;l++){
					printf(" ");
				}
				printf("%c\n",w);
				w++;
				if(i==n){w-=2;}
		}
		if(i>n)
		{   
			if(i!=2*n-1){
				printf("%c",w);}
				for(int l=1;l<=2*(2*n-1-i)-1;l++){
				printf(" ");}
				printf("%c\n",w);
			w--;
		}
		}
	return 0;
}
