#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double d=b*b-4*a*c;
    if (a==0&&b==0){printf("Input error!\n");}
    	else if(a==0){   double q1=1.0*c;
		            double q2=1.0*b;
					double x=-q1/q2;
					if(c==0){printf("x=%.6lf\n",q1);}
					else printf("x=%.6lf\n",x);
				}
		else if(b==0&&c==0){
			printf("x1=x2=%.6lf\n",0.000000);
		}
		else{
	double  l=fabs(d);
	double f=sqrt(l);
	if (d<0){double h=(-b/(2.0*a));
	         double k=(f/(2.0*a));
	if(b==0){
		printf("x1=%.6lfi\nx2=-%.6lfi\n",k,k);
	}else
	printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",h,k,h,k);
	}
	else {double x2=(-b+f)/(2.0*a);
	double x1=(-b-f)/(2.0*a);
	
	if(x2==x1){
		printf("x1=x2=%.6lf\n",x1);}
	else 
	{printf("x1=%.6lf\nx2=%.6lf\n",x2,x1);}
	}}
	return 0;
}
