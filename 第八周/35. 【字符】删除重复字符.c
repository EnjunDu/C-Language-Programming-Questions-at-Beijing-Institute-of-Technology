#include <stdio.h>
#include <string.h>
int main()
{
	char k[101];
	gets(k);
	int len=strlen(k);
	for(int i=0;i<len;i++){
		if(k[i]=='\n'){
			k[i]='\0';
		}
	}
	len=strlen(k);
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(k[i]==k[j]){
				for(int w=j;w<len;w++){
					k[w]=k[w+1];
				}
				len --;
				j--;
			}
		}
	}
	printf("%s\n",k);
	return 0;
}
