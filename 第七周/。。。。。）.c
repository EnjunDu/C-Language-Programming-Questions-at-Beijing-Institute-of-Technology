#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0;
	char x[3],y[3],a[3],b[3];
	scanf("%c%c %c%c %c%c",&x[0],&a[0],&x[1],&a[1],&x[2],&a[2]);
	scanf("%c%c %c%c %c%c",&y[0],&b[0],&y[1],&b[1],&y[2],&b[2]);
do{
	if(x[i]!='H'&&x[i]!='S'&&x[i]!='D'&&x[i]!='C'||y[i]!='H'&&y[i]!='S'&&y[i]!='D'&&y[i]!='C'){
	printf("Input Error!\n");
	exit(0);}
	i++;
}while(i<2);
	i=0;
do{
	if(((a[i]<'2'||a[i]>'10')&&a[i]!='J'&&a[i]!='Q'&&a[i]!='K'&&a[i]!='A')||((b[i]<'2'||b[i]>'10')&&b[i]!='J'&&b[i]!='Q'&&b[i]!='K'&&b[i]!='A'))
	{printf("Input Error!\n");
	exit(0);}
	i++;}while(i<2);

	return 0;
}
