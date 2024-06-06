#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,f,n;
	scanf ("%d",&n);
	int x=0;
	int wtf[100];
	for(int i=pow(10,n);i>pow(10,n-1)-1;i--)
	{
		f=i/pow(10,5);
		e=(i/pow(10,4))-10*f;
		d=(i/pow(10,3))-100*f-10*e;
		c=(i/pow(10,2))-1000*f-100*e-10*d;
		b=(i/10)-10000*f-1000*e-100*d-10*c;
		a=i%10;
		if(i==pow(a,n)+pow(b,n)+pow(c,n)+pow(d,n)+pow(e,n)+pow(f,n)){
			wtf[x++]=i;
		}
	}	
	if (x==0){
		printf("No output.\n");
	}
	else{
		for (int w=0;w<x-1;w++){
			for (int t=0;t<x-w-1;t++){
				if(wtf[t]>wtf[t+1]){
					int temp=wtf[t];
					wtf[t]=wtf[t+1];
					wtf[t+1]=temp;
				}	
			}
		}
		for (int i=0;i<x;i++){
			printf("%d\n",wtf[i]);
		}
	}
	return 0;
}
