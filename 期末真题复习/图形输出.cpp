#include <stdio.h>
int main(){
	int n,i,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			printf(" ");
		}
		for(int s=i;s<=n;s++){
			printf("%d",a);
			a++;
		}
		printf("\n");
		a=1;
		}
		return 0;
}
