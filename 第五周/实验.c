#include <stdio.h>
int main()
{
	int a,j=-1,mark[100];
	scanf("%d",&a);
	for(int i=0;a>=0;i++){
		if(a<10&&a>=0)
		{mark[i]=a;
		j++;}
		if(a>=10){mark[i]=a%10;
		a/=10;
		j++;}
	}
	for(int x=j;x>0;x--){
		switch('mark[x]')
		case
	}
}
