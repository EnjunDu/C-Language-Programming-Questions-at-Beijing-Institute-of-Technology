#include <stdio.h>  
int countsub( char *str, char *ss ){
	char *a;
	a=ss;
	int x[10]={0},y=0,temp;
xx: for(int i=0;i<100;i++){
		if(*str=='\0'){goto ff;}
		if(*str==*a){
			for(int j=0;j<100;j++){
				*a++,*str++;
				if(*a=='\0'){x[y]++;a=ss;}
				if(*str!=*a){a=ss,y++;goto xx;}
			}
		}
		*str++;
	}
ff:	for(int i=0;i<y-1;i++){
	for(int j=0;j<y-1;j++){
		if (x[j]<x[j+1]){
			temp=x[j+1];
			x[j+1]=x[j];
			x[j]=temp;
		}
	}
}
	return (x[0]);
}
main( )  
{  
    char s1[1000] = {0}, s2[100] = {0};  
    gets(s1);  
    gets(s2);  
    printf("%d\n", countsub( s1, s2 ) );  
}  
