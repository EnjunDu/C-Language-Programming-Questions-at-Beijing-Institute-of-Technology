#include <stdio.h>
#include <string.h>
int main(){
	char k[5][100],temp[100];
	for(int i=0;i<5;i++){
		scanf("%s",k[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(strcmp(k[j],k[j+1])<0){
				strcpy(temp,k[j]);
				strcpy(k[j],k[j+1]);
				strcpy(k[j+1],temp);
			}
		}
	}
	for (int i=0;i<5;i++){
		printf("%s\n",k[i]);
	}
	return 0;
}
