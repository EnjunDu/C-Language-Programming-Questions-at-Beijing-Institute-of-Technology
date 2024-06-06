#include <stdio.h>
int main()
{
	int a,m=0;
	double b,i;
	do{
		scanf("%d %lf",&a,&b);
		switch (a) {
			case 1:
			i=(b-32.0)/1.8;
			printf("The Centigrade is %.2lf\n",i);
			m++;
				break;
			case 2:
			i=32.0+b*1.8;
			printf("The Fahrenheit is %.2lf\n",i);
			m++;
				break;
			default:
			printf("Wrong input!\n");
			m++;
			break;
		}
	}while(m<3);
	return 0;
}
