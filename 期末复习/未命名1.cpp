#include <stdio.h>  
int main(){
	int n,i,j,sum;
	char c,k,f,m;
	scanf("%d %c",&n,&c);

	for(i=1;i<n;i++)
	{
			k=c;
			for(i=0;i<3*(n-1)-i+1;i++){
				k+=1;
				if(k=='Z'+1){k='A';}
			}
			f+=
		
		if(i==1){
			printf("%c",f);
			for(j=1;j<=2*n-3;j++){printf(" ");}
			printf("%c",f);
		}
		else
		{
			printf("%c",k);
		for(j=1;j<=i-2;j++){printf(" ");}
		printf("%c",f);
		for(j=1;j<=2*n-2*i-1;j++){printf(" ");}
		printf("%c",f);
		for(j=1;j<=i-2;j++){printf(" ");}
		printf("%c",k);}
		printf("\n");
}
	if(i==n){
	f=c+i-1;
			k=c+3*(n-1)-i+1;
	if(k>'Z'){k='A'+k-'Z'-1;}
		if(f>'Z'){f='A'+f-'Z'-1;}
		for(m=k,sum=1;sum<=n;m--,sum++)
		{printf("%c",m);}
		for(m=f+1,sum=1;sum<n;m++,sum++)
		{printf("%c",m);}
		printf("\n");
	}
	return 0;
}
