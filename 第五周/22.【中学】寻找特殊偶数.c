#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,x=0;
	do
{
		scanf("%d %d",&a,&b);
		if((a<1000||b<1000||a>=b||a>9999||b>9999)&&(a!=0&&b!=0)){
			printf("Error\n");
		}
		else if(a!=0&&b!=0)
		for(int i=a;i<=b;i++){
			c=i/1000;
			d=(i%1000)/100;
			e=(i%100)/10;
			f=i%10;
			if(c!=d&&c!=e&&c!=f&&d!=e&&d!=f&&e!=f&&(i%2==0)){
			    printf("%d  ",i);
			    x++;
			}
}
          if(a>999&&b<=9999&&a<b){
            printf("\ncounter=%d\n",x);
            x=0;}
}while(a!=0&&b!=0);
	return 0;
}
