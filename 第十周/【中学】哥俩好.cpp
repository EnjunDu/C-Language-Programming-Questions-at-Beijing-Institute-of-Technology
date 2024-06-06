#include <stdio.h>
int main(){
	int n,k[100],s;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
	for(int i=0;i<n/2;i++){
		s=k[i]*k[n-1-i];
		printf("%d ",s);
	}
	if(n%2!=0){printf("%d ",k[n/2]);}
	printf("\n");
	return 0;
}
