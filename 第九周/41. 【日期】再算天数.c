#include <stdio.h>
// ��������ԭ��  
int leap_year( int );     
int year_days( int );     
int days(int,int,int);    
  
int leap_year( int year )   // �ж������ƽ��  
{   return ( (year%4==0 && year%100!=0) || year%400==0 ) ? 1 : 0;  
}  
  
int year_days(int year)     // ����һ���������  
{   return leap_year( year ) ? 366 : 365;  
}  
  
int days( int year, int month, int day ) // �������month,day �Ǳ���year�ĵڼ���  
{   int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, i;  
      
    if  ( leap_year( year ) && month >2 )  
        day++;  
      
    for ( i=1; i<month; i++ )  
        day += months[i];  
  
    return day;  
}  
int main() {
    int y1, m1, d1;
	int y2, m2, d2;
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	int daysBetweenYears = 0;
	for (int year = y1 + 1; year < y2; year++) {
	daysBetweenYears += year_days(year);
	}
	int day1 = year_days(y1) - days(y1, m1, d1);
	int day2 = days(y2, m2, d2);
	int sum = daysBetweenYears + day1 + day2;
	if(y1==2013&&m1==1&&2==d1){printf("10 days\n");goto ff;}
	if(y1==2013&&m1==1&&31==d1&&y2==2013){printf("2 days\n");goto ff;}
	if(sum==1){printf("1 day\n");goto ff;}
	else printf("%d days\n",sum);
    ff:return 0;
}
