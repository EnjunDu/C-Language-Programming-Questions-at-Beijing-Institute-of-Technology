#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=0;i<b/2+2*a-2;i++){printf(" ");}printf("*\n");
	for(int i=0;i<b/2+2*a-2-1;i++){printf(" ");}printf("***\n");
	for(int i=1;i<=a;i++){
	for(int j=1;j<=c;j++){
		for(int j=1;j<=2*(a-i);j++){printf(" ");}
		for(int j=1;j<=b+4*(i-1);j++){printf("*");}
		printf("\n");
	}
	}
	for(int i=0;i<b/2+2*a-2;i++){
		for(int j=0;j<i;j++){printf(" ");}
		printf("*");
		for(int j=0;j<b+4*a-6-2*i;j++){printf(" ");}
		printf("*\n");
	}
	for(int i=0;i<b/2+2*a-2;i++){printf(" ");}printf("*\n");
	return 0;
}
