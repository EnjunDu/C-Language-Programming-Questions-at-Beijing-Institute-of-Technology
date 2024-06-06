#include <stdio.h>
#include <math.h>
int l(int a,int b,int c,int d){
	int op=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return op;
}
int s(int a,int b,int c){
	double p=(a+b+c)/2.0;
	double m=sqrt(p*(p-a)*(p-b)*(p-c));
	return m;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int p,op=0,yp=0;
		int k[2][100];
		double w[100],h[100]={0},b;
		scanf("%d",&p);
		for(int j=0;j<p;j++){
			scanf("%d %d",&k[0][j],&k[1][j]);
		}
		for(int i=0;i<p;i++){
			for(int j=i+1;j<p;j++){
				w[op]=l(k[0][i],k[1][i],k[0][j],k[1][j]);
				op++;
			}
		}
		for(int i=0;i<p*(p-1)/2;i++){
			for(int j=i+1;j<p*(p-1)/2;j++){
				for(int y=j+1;y<p*(p-1)/2;y++){
				h[yp]=s(w[i],w[j],w[y]);	
				}
			}
		}
		for(int i=100;i>0;i--){
			for(int j=i;j>0;j--){
				if(h[j]<h[j+1]){
					b=h[j];
					h[j]=h[j+1];
					h[j+1]=b;
				}
			}
		}
	printf("%.1lf",h[0]);
	}
	return 0;
}
