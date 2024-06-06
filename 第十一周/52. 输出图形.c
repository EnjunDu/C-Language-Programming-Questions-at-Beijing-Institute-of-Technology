	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
		int n;
		char a,b;
		scanf("%d %c",&n,&a);
		b=a;
		for(int w=0;w<=3*n-4;w++){
			b+=1;
			if(b=='Z'+1){b='A';}
		}
		for(int i=1;i<=n;i++){
		if(n==1&&i==1){
			printf("%c\n",a);
			exit(0);
		}
		if(i==1){printf("%c",a);for(int j=0;j<4*n-5;j++){printf(" ");}printf("%c\n",a);}
		if(i!=1&&i!=n){
			for(int j=1;j<=4*n-3;j++){
			if(j==1)
			{	b-=1;
				if(b=='A'-1){b='Z';}
				printf("%c",b);
			}
			if(j==4*n-2*i-1){printf("%c",a);}
			if(j==4*n-3){printf("%c\n",b);}
			if(j==2*i-1)
			{
				a+=1;
				if(a=='Z'+'B'-'A'){a='A';}
				printf("%c",a);
			}
			else if(j!=1&&j!=4*n-2*i-1&&j!=4*n-3&&j!=2*i-1) printf(" ");						
									}
						}
		if(i==n){
			for(int k=1;k<n;k++){
				b-=1;
				if(b=='A'-1){b='Z';}
				printf("%c ",b);
			}
			for(int k=1;k<n;k++){
				a+=1;
				if(a=='Z'+1){a='A';}
				printf("%c ",a);
			}
			a+=1;
			if(a=='Z'+1){a='A';}
			printf("%c\n",a);
		}
							}
		return 0;
	}
