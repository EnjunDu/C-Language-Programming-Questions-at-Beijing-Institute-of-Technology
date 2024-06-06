#include <stdio.h>
int main()
{
    int n,i=0,j=0,k,w[100];
    scanf("%d",&n);
    for(i=0,k=n;k>0;i++){
        k /= 10;
        w[i] = k % 10;
        j++;
    }
    for(int i=0;i<j;i++){
        for(int h=0;h<j-1;h++){
            if(w[h]<w[h+1]){
                int temp=w[h];
                w[h]=w[h+1];
                w[h+1]=temp;
            }
        }
    }
    for(int i=0;i<j;i++){
        printf("%d",w[i]);
    }
    printf("\n");
    return 0;
}
