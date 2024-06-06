#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double sum=0.0;
	for(double i=1.0;i<=n;i++){
		sum+=1.0/i;
	}
	printf("sum=%.6lf\n",sum);
	return 0;
}
