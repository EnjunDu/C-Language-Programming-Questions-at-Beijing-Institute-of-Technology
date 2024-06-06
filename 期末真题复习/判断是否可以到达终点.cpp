#include <stdio.h>
int f(int a,int b,int x,int y){
	if((a+b==x&&b==y)||(a+b==y&&a==x)){return 1;}
	if((a!=x&&a+b>x)||(b!=y&&a+b>y)){return 0;}
	else return (f(a+b,b,x,y)||f(a,a+b,x,y));
}
int main(){
	int a,b,x,y;
	scanf("%d,%d",&a,&b);
	scanf("%d,%d",&x,&y);
	int i=f(a,b,x,y);
	if(i==1){printf("Yes.\n");}
	if(i==0){printf("No.\n");}
	return 0;
}
