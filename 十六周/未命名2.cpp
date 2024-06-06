#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	gets(a);
	ff: int len=strlen(a);
	int x=0,y=0,z=0;
	int a1[100],b1[100],c1[100];
	for(int i=0;i<len;i++){
		if(a[i]>='a'&&a[i]<='z'){a1[x]=i;x++;}
		if(a[i]>='A'&&a[i]<='Z'){b1[y]=i;y++;}
		else {c1[z]=i;z++;}
	}
	int op=0;
	if(x>=y){int sb;
		xx:for(int i=0;i<len;i++){
			for(int j=0;j<z;j++){
				if(i==c1[j]){printf("%c",a[i]);
							goto xx;}
			}
			if(sb==y){op=0;}
			if(op==0){for(int j=0;j<x;j++){
				int ad=a1[j];
				printf("%c",a[ad]);op=1;
			}}
			if(op==1){for(int j=0;j<y;j++){
				int bc=b1[j];
				printf("%c",a[bc]);op=0;
				sb=j;
			}}
		}
	}
	printf("\n");
	return 0;
}
