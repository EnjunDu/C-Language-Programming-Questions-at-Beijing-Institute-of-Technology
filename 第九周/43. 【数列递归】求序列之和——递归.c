#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	double sum=1.0;
	double i=1.0;
	scanf("%d",&n);
	if(n==1){printf("1\n");exit(0);}
	for(int k=1;k<n;i++,k++){
		if(k%2==1){
			sum+=1/(i+1);
		}
		if(k%2==0){
			sum-=1/(i+1);
		}
	}
	printf("%.6lf\n",sum);
	return 0;
}
