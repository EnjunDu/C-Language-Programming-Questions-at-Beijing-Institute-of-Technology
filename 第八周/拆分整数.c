#include <stdio.h>  
int count(int n, int m) {
    if (n < 1 || m < 1) {
        return 0;
    }
    if (n == 1 || m == 1) {
        return 1;
    }
    if (n < m) {
        return count(n, n);
    }
    if (n == m) {
        return count(n, m - 1) + 1;
    }
    return count(n - m, m) + count(n, m - 1);
}
int main()   
{  
   int n, count( );  
   scanf("%d", &n);  
   printf("%d\n", count (n, n-1));    
   return 0;  
}  
