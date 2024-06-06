#include <stdio.h>
int main()
{
	int n,x=1,w=1,found=0,a,b,k[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&k[i]);}
	for(int j=0;j<n-1;j++){
		if(k[j]==k[j+1]){w++;found=1;}
		if((k[j]!=k[j+1])&&w>x){x=w;b=j;a=j-w+1;w=1;}
		if((j==n-2)&&w>x){b=j+1;a=j-w+2;break;}
	}
	if(found==1){printf("The longest equal number list is from %d to %d.\n",a,b);}
	if(found==0){printf("No equal number list.\n");}
	return 0;
}
