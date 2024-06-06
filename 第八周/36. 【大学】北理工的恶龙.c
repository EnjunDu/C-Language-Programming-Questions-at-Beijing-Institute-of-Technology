#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n[100],m[100],a[100]={0},x,y,sum=0,temp;
	scanf("%d %d",&x,&y);
	int b=x;
	if(x>y){printf("bit is doomed!\n");
			exit(0);}
	for(int i=0;i<x;i++){
		scanf("%d",&n[i]);
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if(n[j]>n[j+1]){
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	for(int i=0;i<y;i++){
		scanf("%d",&m[i]);
	}
	for(int i=0;i<y;i++){
			for(int j=0;j<y-1;j++){
				if(m[j]>m[j+1]){
					temp=m[j];
					m[j]=m[j+1];
					m[j+1]=temp;
				}
			}
		}
	for(int i=0;i<x;i++){
		for(int j=0;j<y-1;j++){
			if(n[i]<=m[j])
			{a[i]=m[j];
			b--;
			 for(int o=j;o<b-1;o++){a[o]=a[o+1];}
			}
		}
		if(a[i]==0){printf("bit is doomed!\n");
					exit(0);}
	}
	for(int i=0;i<x;i++){sum+=a[i];}
	printf("%d\n",sum);
	return 0;
}
