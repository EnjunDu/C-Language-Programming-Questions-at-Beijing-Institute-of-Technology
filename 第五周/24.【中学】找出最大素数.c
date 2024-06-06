#include <stdio.h>  
int main() {  
    int a,b,c,asw = 0;  
    scanf("%d",&a);  
    for (int i=a;i>=2;i--) {  
        c=0; // ÖØÖÃ c Îª 0  
        for(int x=i-1;x>1;x--) {  
            if (i%x==0) {  
                break;  
            }  
            if (x==2&&i%2!=0) {  
                c=1;  
                break;  
            }  
        }  
        if (c==1) {  
            asw=i;  
            break;  
        }  
    }  
    printf("The max prime number is %d.\n", asw);  
    return 0;  
} 
