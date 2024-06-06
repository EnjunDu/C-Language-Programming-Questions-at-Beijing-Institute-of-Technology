#include <stdio.h>
int main(){
	int p;
	scanf("%d",&p);
	for(int i=0;i<p;i++){
		int n;
		scanf("%d",&n);
		int suv=n*(n-1)/2;
		int sum=n-1;
		if(n%2!=0&&n!=1){
			sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
