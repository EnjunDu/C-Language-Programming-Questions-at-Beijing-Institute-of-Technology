#include <stdio.h>
int GCD(int n,int m){
    if(m<=n && n%m==0){
        return m;
    }
    else if(n<m){
        return GCD(m,n);
    }
    else{
        return GCD(m,n%m);
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",GCD(n,m));
    return 0;
}
