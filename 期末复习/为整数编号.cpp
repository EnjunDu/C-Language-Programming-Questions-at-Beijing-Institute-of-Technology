#include <stdio.h>
#include <math.h>
struct nn  
{  int no;     
   int num;     
};  
  
typedef struct nn DATA;  
  
int number( char * , DATA []);  
  
int main( )  
{     
   DATA b[100];    
   static char sa[500];    
   int i, n;    
   gets( sa );   
   n = number( sa, b );   
   for ( i=0; i<n; i++ )   
       printf("%d %d\n", b[i].num, b[i].no );   
   return 0;  
}  
  
int number( char * str, DATA a[] ) 
{ 
    int v[5],i=0,j=0,k,sum,x,deposit,min=1000,bottom=-1000,flag,store=0;
    while(*str)     //*str=='\0'时,跳出内循环，仍有str++，所以再判断时*str不一定为'\0'，加static 
    {
     sum=0;
     while(*str!=' '&&*str)     //数的结尾可能是'\0'而非' ' 
     v[i++]=*str++ -48;x=i-1;
     while(i--)
     sum+=v[i]*pow(10,x-i);
     a[j++].num=sum;str++;i++;     //while(i--)结束时i=-1
 }
 for(i=1;i<=j;i++)
 {
  flag=1;
  for(k=0;k<j;k++)
  if(a[k].num<min&&a[k].num>bottom)
  { deposit=k;min=a[k].num;}
  else if(a[k].num==bottom&&k>store)     //不在上一轮的位置存
  { flag=0;deposit=k;break;}
  if(flag) bottom=min;
  a[deposit].no=i;min=1000;store=deposit;     //store存的是上一个数的位置，不为k，此时k=j
 }
 return j;
}
