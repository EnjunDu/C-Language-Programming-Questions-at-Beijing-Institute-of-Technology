#include <stdio.h>  
#include <math.h>  
int main()  
{  
    int i,n,p,a[100],j=0,sum=0;  
    scanf("%d",&n);  
    int max,min;  
    max=pow(10,n);  
    min=max/10;
    for(p=min;p<max;p++)
	{    int q=p;
		for(i=1;q>0;q=q/10,i++)  
        {  
            a[i]=q%10;  	
        }  
        for(i=1;i<=n;i++)  
        {  
            sum=sum+pow(a[i],n); 
        }  
        if(sum==p)  
        {  
            printf("%d\n",p);  
            j=1;  
        }  
        sum=0;  
    }  
    if(j!=1)  
    printf("No output.\n");  
    return 0;  
}  
