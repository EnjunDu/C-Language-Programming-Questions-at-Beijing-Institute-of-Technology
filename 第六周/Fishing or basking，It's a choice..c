#include <stdio.h>
int main()
{
	int x,i=0;
	scanf("%d",&x);
do{
 int year, month, day, sum = 0;
    scanf("%d %d %d", &year, &month, &day);

    // Calculate the number of leap years between the input year and 1990
    int leap_years = 0;
    for (int i = 1990; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            leap_years++;
        }
    }

    // Calculate the total number of days
    sum = (year - 1990) * 365 + leap_years;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < month - 1; i++) {
        sum += days_in_month[i];
    }
    sum += day;

    // Adjust for leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month > 2) {
            sum++;
        }
    }
	int h=sum%5;
	if(h>=1&&h<=3){printf("He was fishing on %d.%d.%d\n",year,month,day);}
	if(h>3||h==0){printf("He was basking on %d.%d.%d\n",year,month,day);}
	i++;
}while(i<x);
	return 0;
}
