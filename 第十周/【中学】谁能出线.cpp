#include <stdio.h>
int main(){
	int n[2][10]={{1,2,3,4,5,6,7,8,9,10},{0,0,0,0,0,0,0,0,0,0}},temp,op=1,k[10];
	for(int i=0;i<10;i++){
		scanf("%d",&n[1][i]);
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9-i;j++){
			if(n[1][j]>n[1][j+1]){
				temp=n[1][j];
				n[1][j]=n[1][j+1];
				n[1][j+1]=temp;
				temp=n[0][j];
				n[0][j]=n[0][j+1];
				n[0][j+1]=temp;
			}
		}
	}
	k[0]=n[0][9];
	for(int i=8;i>=0;i--){
		if(n[1][i]==n[1][9]){op++;k[op-1]=n[0][i];}
	}
	for(int i=0;i<op-1;i++){
		for(int j=0;j<op-1-i;j++){
			if(k[j]>k[j+1]){
				temp=k[j];
				k[j]=k[j+1];
				k[j+1]=temp;
			}
	}}
	for(int i=0;i<op;i++){
		printf("%d\n",k[i]);
	}
	return 0;
}
