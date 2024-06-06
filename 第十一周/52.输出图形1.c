#include<stdio.h>  
int main(){  
    int n,c;  
    scanf("%d %c",&n,&c);  
    char a[n][2*n-1];
    int i,j;  
    for(i=0;i<n;i++){  
        for(j=0;j<2*n-1;j++){  
            a[i][j]='0';  
        }  
    }  
    int k=0;  
    for(i=0,j=0;i<n;i++,j++){  
        a[i][j]='A'+(c+k-'A')%26;  
        a[i][2*n-2-j]=a[i][j];  
        k++;  
    }  
    for(j=n-2;j>=0;j--){  
        a[n-1][j]='A'+(c+k-'A')%26;  
        a[n-1][2*n-2-j]=a[n-1][j];  
        k++;  
    }  
    for(i=n-2;i>0;i--){  
        a[i][0]='A'+(c+k-'A')%26;  
        a[i][2*n-2]=a[i][0];  
        k++;  
    }  
    for(i=0;i<n;i++){  
        for(j=0;j<2*n-1;j++){  
            if(a[i][j]!='0'){  
            printf("%c",a[i][j]);  
            }  
            else{  
                printf(" ");  
            }  
            if(j==2*n-2){  
                printf("\n");  
            }  
            else{  
                printf(" ");  
            }  
        }  
    }  
    return 0;  
}
