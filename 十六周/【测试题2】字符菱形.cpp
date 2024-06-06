#include <stdio.h>
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	char x=c;
	for(int i=0;i<4*n-5;i++){
		x+=1;
		if(x=='Z'+1){x='A';}
	}
	for(int i=1;i<=n;i++){
		if(i==1){for(int j=0;j<n-1;j++){printf(" ");}printf("%c\n",c);continue;}
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		c+=1;if(c=='Z'+1){c='A';}
		printf("%c",c);
		for(int j=1;j<=2*i-3;j++){printf(" ");}
		printf("%c\n",x);
		x--;
		if(x=='A'-1){x='Z';}
	}
	for(int i=n-1;i>1;i--){
		for(int j=1;j<=n-i;j++){
		printf(" ");
		}
		c+=1;if(c=='Z'+1){c='A';}
				printf("%c",c);
		for(int j=1;j<=2*i-3;j++){printf(" ");}
		printf("%c\n",x);
		x--;
		if(x=='A'-1){x='Z';}
	}
	if(n!=1){for(int j=0;j<n-1;j++){printf(" ");}
	c+=1;if(c=='Z'+1){c='A';}
	printf("%c\n",c);}
	return 0;
}
