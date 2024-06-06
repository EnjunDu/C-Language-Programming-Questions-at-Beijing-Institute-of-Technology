
#include <stdio.h>
#include <math.h>
typedef struct dot
{
	int no,x,y;
}DOT;
float calculate(DOT a,DOT b,DOT c)
{
	return 1.0*fabs((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x))/2;
}
void seek(DOT *p,DOT *s,DOT *q,float *m,int n)
{
	float B=0;
	if(p->no<n-1)	
	if(s->no<n)
	if(q->no)
	{
		B=calculate(*p,*s,*q);
		if(*m<B) *m=B;q++;seek(p,s,q,m,n);
	}
	else { s++;seek(p,s,s+1,m,n);}
	else { p++;seek(p,p+1,p+2,m,n);}
}
main()
{
	int t,n,i;static DOT d[100];float A;
	scanf("%d",&t);
	while(t--)
	{
		A=0;scanf("%d",&n);
		for(i=0;i<n;i++)
		{ d[i].no=i+1;scanf("%d %d",&d[i].x,&d[i].y);}
		seek(d,&d[1],&d[2],&A,n);
		printf("%.1f\n",A);
	}
	return 0;
}
