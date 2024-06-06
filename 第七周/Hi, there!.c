#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char c;
	char k[100];
	gets(k);
	printf("Hi,there,");
	for (i=0;k[i]!='\0';i++){
		printf("%c",k[i]);
	}
	printf("!\n");
	return 0;
}
