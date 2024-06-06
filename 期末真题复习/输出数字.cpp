#include <stdio.h>
int main(){
	int n,k,a[100]={0},b[100]={0},x;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		x=a[i];
		b[x]++;
	}
	for(int j=0;j<20;j++){
	if(b[j]>k){x=-1;printf("%d\n",j);b[j]=-1000;}
	}
	if(x!=-1){printf("No such element.\n");}
	return 0;
}
