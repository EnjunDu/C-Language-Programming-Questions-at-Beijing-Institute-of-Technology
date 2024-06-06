#include <stdio.h>
#include <stdlib.h>
int main()
{
	char N[100];
	gets(N);
	int x=0,y=0;
	if(N[4]>'9'||N[4]<'0'){printf("no.\n");
							exit(0);}
	for(int i=0;i<4;i++){
		if(N[i]>='0'&&N[i]<='9'){x++;}
		if(N[i]>='A'&&N[i]<='Z'&&N[i]!='I'&&N[i]!='O'){y++;}
	}
	if(x==2&&y==2){printf("ok.\n");}
	else {printf("no.\n");}
	return 0;
}
