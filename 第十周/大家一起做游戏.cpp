#include <stdio.h>
int f(int n,int m)
{
    if(n==1) return 0;
    else return (f(n-1,m)+m)%n;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("The left child is NO %d.\n",f(n,m)+1);
    return 0;
}
