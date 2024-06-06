#include <stdio.h>    
typedef struct buy  
{  char  gname;  
   int   sname;  
   int   gprice;  
} BUY;  
int findm(int n, int price[][3], BUY schm[])
{
    int i, j, k;
    int minPrice = -1;
    int minShopA, minShopB, minShopC;
    
    // 初始化购物方案数组
    for (i = 0; i < 3; i++) {
        schm[i].gname = ' ';
        schm[i].sname = 0;
        schm[i].gprice = 0;
    }
    
    // 找到最少的钱数购买方案
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                if (i != j && i != k && j != k) {
                    int totalPrice = price[i][0] + price[j][1] + price[k][2];
                    
                    if (minPrice == -1 || totalPrice < minPrice) {
                        minPrice = totalPrice;
                        minShopA = i + 1;
                        minShopB = j + 1;
                        minShopC = k + 1;
                    }
                }
            }
        }
    }
    
    // 更新购物方案数组
    schm[0].gname = 'A';
    schm[0].sname = minShopA;
    schm[0].gprice = price[minShopA - 1][0];
    
    schm[1].gname = 'B';
    schm[1].sname = minShopB;
    schm[1].gprice = price[minShopB - 1][1];
    
    schm[2].gname = 'C';
    schm[2].sname = minShopC;
    schm[2].gprice=price[minShopC-1][2];
    return minPrice;
}
int main( )  
{  int i, j, n;  
   int min, price[10][3];  
   int findm( int n, int price[][3], BUY scheme[] );  
   static BUY scheme[3]={ {'A', 0, 0}, {'B', 0, 0}, {'C', 0, 0} };  
   scanf( "%d", &n );  
   for( i = 0; i < n; i++ )  
    for( j = 0; j < 3; j++ )  
       scanf( "%d", &price[i][j] );  
   min = findm( n, price, scheme );  
   printf("Total Money are : %d\nGoods-Name  Shop-Name  Goods-Price\n", min );  
   for ( i=0; i < 3; i++ )  
       printf("         %c:%10d%13d\n", scheme[i].gname, scheme[i].sname, scheme[i].gprice );  
   return 0;  
}  
