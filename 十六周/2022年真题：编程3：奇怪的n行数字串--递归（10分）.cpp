#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int x=0,n,k,a[n][100];
	scanf("%d %d",&n,&k);
	a[0][1]=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<pow(2,i);j++){
		if(a[i-1][j]==0){
			a[i][x]=0;x++;
			a[i][x]=1;x++;
		}	
		if(a[i-1][j]==1){
			a[i][x]=1,x++;
			a[i][x]=0,x++;
		}
		}
		x=0;
	}
	printf("%d",a[n-1][k-1]);
	return 0;
}
