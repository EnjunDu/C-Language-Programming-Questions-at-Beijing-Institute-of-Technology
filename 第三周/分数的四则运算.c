#include<stdio.h>
	int main(void)
{
	int i,m,n,k,a,b,c,d;
	char e,f,g;
	scanf("%d%c%d %c %d%c%d",&a,&e,&b,&f,&c,&g,&d);

	    switch (f) {
	        case '+':
	            	m=b*d;
					n=a*d+b*c;
	            break;
	        case '-':
	           	m=b*d;
			   	n=a*d-b*c;
	            break;       
	        case '*':
	            	m=b*d;
					n=a*c;
	            break;
	        case '/':
	            	m=b*c;
					n=a*d;
	            break;
	        default:
	            printf("Invalid operator.\n");
	            return 0;
	    }
	
	k=(m>n)?n:m;
	for(i=k;i>=2;i--)
	{
	if(((m%i)==0)&&((n%i)==0))
	{
	m=m/i;
	n=n/i;
	}}
    if(m==1){printf("%d%c%d %c %d%c%d = %d\n",a,e,b,f,c,g,d,n);
     }
    if(n==0){printf("%d%c%d %c %d%c%d = %d\n",a,e,b,f,c,g,d,n);}
    else if(m!=1&&n!=0){
	 printf("%d%c%d %c %d%c%d = %d%c%d\n",a,e,b,f,c,g,d,n,e,m);}
	 
    return 0;
}
