#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char a[100];
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<(n/2);i++){
		if(n==0){printf("Yes\n");
					exit(0);}
		if(a[i]!=a[n-1-i]){printf("No\n");
							exit(0);}
	}
	printf("Yes\n");
	return 0;
}
