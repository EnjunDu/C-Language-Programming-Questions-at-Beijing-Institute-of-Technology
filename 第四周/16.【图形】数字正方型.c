#include <stdio.h>
int main()
{
	int n,x,i;
    scanf("%d",&n);
	x=n*n;	
    for (i=1;i<=x;i++){
	{     if (i<=9){printf("  %d",i);}
	if(i>=10){printf(" %d",i);}
	  if(i%n==0){
	  	printf("\n");
	  }
		}
	}
	return 0;
}
