#include <stdio.h>  
int judge(int,int,int);  
int tianshu(int,int,int);  
void xianhao(int , int);  
int main(int argc, char** argv) {  
    int y, m, d, i, j, xingqiji, day, shu,shuai;  
    scanf("%d %d %d", &y, &m, &d);  
    xingqiji = judge(y,m,d);  
    if (xingqiji==6||xingqiji==0)  
    {  
        printf("Free.\n");  
    }  
    else  
    {  
        day = tianshu(y,m,d);  
        shu = (day/91)%5;  
         if(shu == 0)  
    {  
        switch (xingqiji)  
        {  
            case 1: printf("3 and 8.\n"); break;    
            case 2: printf("4 and 9.\n"); break;    
            case 3: printf("5 and 0.\n"); break;    
            case 4: printf("1 and 6.\n"); break;  
            case 5: printf("2 and 7.\n"); break;    
        }  
    }  
      
        if(shu==1)  
        {  
                switch (xingqiji)  
        {  
            case 2: printf("3 and 8.\n"); break;    
            case 3: printf("4 and 9.\n"); break;    
            case 4: printf("5 and 0.\n"); break;    
            case 5: printf("1 and 6.\n"); break;  
            case 1: printf("2 and 7.\n"); break;    
        }  
        }  
      
      
        if(shu==2)  
        {  
                switch (xingqiji)  
        {  
            case 3: printf("3 and 8.\n"); break;    
            case 4: printf("4 and 9.\n"); break;    
            case 5: printf("5 and 0.\n"); break;    
            case 1: printf("1 and 6.\n"); break;  
            case 2: printf("2 and 7.\n"); break;    
        }  
          
}  
      
        if(shu==3)  
        {  
                switch (xingqiji)  
        {  
            case 4: printf("3 and 8.\n"); break;    
            case 5: printf("4 and 9.\n"); break;    
            case 1: printf("5 and 0.\n"); break;    
            case 2: printf("1 and 6.\n"); break;  
            case 3: printf("2 and 7.\n"); break;    
        }  
        }  
        if(shu==4)  
        {  
                switch (xingqiji)  
        {  
            case 5: printf("3 and 8.\n"); break;    
            case 1: printf("4 and 9.\n"); break;    
            case 2: printf("5 and 0.\n"); break;    
            case 3: printf("1 and 6.\n"); break;  
            case 4: printf("2 and 7.\n"); break;    
        }  
        }  
      
    }  
      
}  
int judge(int y,int m,int d)  
{  
    int w;  
    if(3 > m)    
    {m+= 12;    
    y--;}    
    w=((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1)%7;    
    return w;    
}    
    int tianshu(int y2,int m2,int d2)  
    {  
        int a=0,b=0,j=0,k=0,i,y1,m1,d1,c=0,g=0,e=0,f=0;  
    y1 = 2012;  
    m1 = 4;  
    d1 = 9;  
 a=d1;    
 j=m1;    
 k=m2;    
 m1--;    
 for(i=m1;i>0;i--)    
 {  
  switch (i)    
 {   
 case 0: a+=0; break;    
case 1: a+=31; break;    
case 2: a+=28; break;    
case 3: a+=31; break;    
case 4: a+=30; break;    
case 5: a+=31; break;    
case 6: a+=30; break;    
case 7: a+=31; break;    
case 8: a+=31; break;    
case 9: a+=30; break;    
case 10: a+=31; break;    
case 11: a+=30; break;    
case 12: a+=31; break;    
}    
}    
b=d2;    
m2--;    
for(i=m2;i>0;i--){    
     switch (i)    
 { case 0: b+=0; break;    
case 1: b+=31; break;    
case 2: b+=28; break;    
case 3: b+=31; break;    
case 4: b+=30; break;    
case 5: b+=31; break;    
case 6: b+=30; break;    
case 7: b+=31; break;    
case 8: b+=31; break;    
case 9: b+=30; break;    
case 10: b+=31; break;    
case 11: b+=30; break;    
case 12: b+=31; break;    
}       
}    
 if(y1==y2)    
 { c=b-a;    
    g=0;    
    for(i=y2-1;i>y1;i--)    
     { if ((i%4==0&&i%100!=0)||i%400==0)    
     g++;    
           
     }    
     if (((y2%4==0&&y2%100!=0)||y2%400==0)&&k>2){    
         
     g++;}    
     if (( (y1%4==0&&y1%100!=0)||y1%400==0)&&j<2){    
         
     g++;}    
     c=c+g;    
      
 }    
 else {    
    a=365-a;    
    e=y2-y1-1;    
    c=b+a+(365*e);    
    f=0;    
    for(i=y2-1;i>y1;i--)    
     { if ((i%4==0&&i%100!=0)||i%400==0)    
     f++;    
           
     }    
     if (((y2%4==0&&y2%100!=0)||y2%400==0)&&k>2){    
         
     f++;}    
     if (( (y1%4==0&&y1%100!=0)||y1%400==0)&&m1<2){    
         
     f++;}    
     c=c+f;    
     
 }    
     return c;  
      
}  
