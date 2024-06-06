#include <stdio.h>
int main()
{
	int a,c,x;
	char wtf;
	scanf("%d %c %d",&a,&wtf,&c);
	switch (wtf) {
		case '+':
			x=a+c;
			break;
		case '-':
			x=a-c;
			break;
			case '*':
				x=a*c;
				break;
				case '/':
					x=a/c;
					break;
		default:
			return 0;
			break;
	}
	printf("%d\n",x);
	return 0;
}
