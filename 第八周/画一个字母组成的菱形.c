#include <stdio.h>
int main()
{
	char a;
	int n;
	scanf("%c,%d",&a,&n);
	for(int i=1;i<=2*n-1;i++)
	{
		if(a=='Z'+'Z'-'Y'){a='A';}
		if(a =='@') { a = 'Z'; }
		if(i==1){for (int p=0;p<n-1;p++){printf(" ");} printf("%c\n",a);a++;}
		else if(i<=n)
	{
		for(int j=0;j<n-i;j++){printf(" ");}
		printf("%c",a);
		for(int j=0;j<2*i-3;j++){printf(" ");}
		printf("%c\n",a);a++;
	}
		if(i==n){a-=2;}
		if(i>n&&i<=2*n-2)
		{
			for(int j=0;j<i-n;j++){printf(" ");}
			printf("%c",a);
			for(int j=0;j<4*n-3-2*i;j++){printf(" ");}
			printf("%c\n",a);a--;
		}
		if(i==2*n-1&&i!=1){for (int p=0;p<n-1;p++){printf(" ");} printf("%c\n",a);}		
	}
	return 0;
}
