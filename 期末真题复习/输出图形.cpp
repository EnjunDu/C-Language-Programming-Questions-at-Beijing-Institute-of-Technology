#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	if(n%2==0||!((c>='a'&&c<='z')||(c>='A'&&c<='Z'))){printf("input error!\n");
														exit(0);}
	if(c>='a'&&c<='z'){c+=('A'-'a');}
	char x=c-1,y=c+1,z;
	if(n==1){printf("%c\n",c);exit(0);}
	for(int i=1;i<=n;i++){
		if(i==1){
			for(int j=1;j<=n;j++){
				x+=1;
				if(x=='Z'+1){x='A';}
				printf("%c",x);
				if(j==n/2+2){z=x;}
				if(j==n){printf("\n");}
			}
		}
		if(i>1&&i<n){
		for(int j=1;j<=n;j++){
			if(j==1){printf("%c",y);y+=1;if(y=='Z'+1){y='A';}}
			if(j==n/2+1){printf("%c",z);z+=1;if(z=='Z'+1){z='A';}}
			if(j==n){x+=1;if(x==('Z'+1)){x='A';}printf("%c\n",x);}
			if(j!=1&&j!=(n/2+1)&&j!=n){printf(" ");}
		}
		}
		if(i==n){
			for(int j=1;j<=n;j++){
				printf("%c",y);y+=1;if(y=='Z'+1){y='A';}
				if(j==n){printf("\n");}
			}
		}
	}
	return 0;
}
