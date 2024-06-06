#include <stdio.h>   
int main()  
{
    char a[3][3],b[3][3],a_[3],b_[3];
    char m;
    int i,j,k,x,num=0;
    int a__[3],b__[3];
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		a[i][j]=getchar();
    		if(j==0)
    		{
				switch (a[i][j])
				{
					case 'H':a__[i]=400;break;
					case 'S':a__[i]=300;break;
					case 'D':a__[i]=200;break;
					case 'C':a__[i]=100;break;
					default:printf("Input Error!\n");return 0;
				}
			}
			if(j==1)
			{
				switch (a[i][j])
				{
					case '2':a__[i]+=1;break;
					case '3':a__[i]+=2;break;
					case '4':a__[i]+=3;break;
					case '5':a__[i]+=4;break;
					case '6':a__[i]+=5;break;
					case '7':a__[i]+=6;break;
					case '8':a__[i]+=7;break;
					case '9':a__[i]+=8;break;
					case 'J':a__[i]+=10;break;
					case 'Q':a__[i]+=11;break;
					case 'K':a__[i]+=12;break;
					case 'A':a__[i]+=13;break;
					case '1':break;
					default:printf("Input Error!\n");return 0;
				}
			}
			if(j==2)
			{
				if(a[i][j]!='0'&&a[i][j]!=' '&&a[i][j]!='\n')
				{
					printf("Input Error!\n");
					return 0;
				}
				else if(a[i][j-1]=='1'&&a[i][j]=='0')
				{
					a__[i]+=10;
					m=getchar();
				}
				else if(a[i][j-1]=='1'&&a[i][j]!='0')
				{
					printf("Input Error!\n");
					return 0;
				}
			}
		}
	}
	if(a[2][2]=='\n')
	a[2][2]=' ';
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		b[i][j]=getchar();
    		if(j==0)
    		{
				switch (b[i][j])
				{
					case 'H':b__[i]=400;break;
					case 'S':b__[i]=300;break;
					case 'D':b__[i]=200;break;
					case 'C':b__[i]=100;break;
					default:printf("Input Error!\n");return 0;
				}
			}
			if(j==1)
			{
				switch (b[i][j])
				{
					case '2':b__[i]+=1;break;
					case '3':b__[i]+=2;break;
					case '4':b__[i]+=3;break;
					case '5':b__[i]+=4;break;
					case '6':b__[i]+=5;break;
					case '7':b__[i]+=6;break;
					case '8':b__[i]+=7;break;
					case '9':b__[i]+=8;break;
					case 'J':b__[i]+=10;break;
					case 'Q':b__[i]+=11;break;
					case 'K':b__[i]+=12;break;
					case 'A':b__[i]+=13;break;
					case '1':break;
					default:printf("Input Error!\n");return 0;
				}
			}
			if(j==2)
			{
				if(b[i][j]!='0'&&b[i][j]!=' '&&b[i][j]!='\n')
				{
					printf("Input Error!\n");
					printf("321");
					return 0;
			    }
				else if(b[i][j-1]=='1'&&b[i][j]=='0')
				{
					b__[i]+=10;
					m=getchar();
				}
				else if(b[i][j-1]=='1'&&b[i][j]!='0')
				{
					printf("Input Error!\n");
					return 0;
				}
			}
		}
	}
	if(b[2][2]=='\n')
	b[2][2]=' ';
	if((a[0][0]==a[1][0]&&a[0][1]==a[1][1]&&a[0][2]==a[1][2])||(a[0][0]==a[2][0]&&a[0][1]==a[2][1]&&a[0][2]==a[2][2])||(a[2][0]==a[1][0]&&a[2][1]==a[1][1]&&a[2][2]==a[1][2]))
	{
		printf("Input Error!\n");
		return 0;
	}
	if((b[0][0]==b[1][0]&&b[0][1]==b[1][1]&&b[0][2]==b[1][2])||(b[0][0]==b[2][0]&&b[0][1]==b[2][1]&&b[0][2]==b[2][2])||(b[2][0]==b[1][0]&&b[2][1]==b[1][1]&&b[2][2]==b[1][2]))
	{
		printf("Input Error!\n");
		return 0;
	}
	for(j=0;j<3;j++)
	{
		for(i=j;i<3;i++)
		if(a__[j]<a__[i])
		{
			x=a__[j];
			a__[j]=a__[i];
			a__[i]=x;
			for(k=0;k<3;k++)
			{
				a_[k]=a[j][k];
				a[j][k]=a[i][k];
				a[i][k]=a_[k];
			}
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=j;i<3;i++)
		if(b__[j]<b__[i])
		{
			x=b__[j];
			b__[j]=b__[i];
			b__[i]=x;
			for(k=0;k<3;k++)
			{
				b_[k]=b[j][k];
				b[j][k]=b[i][k];
				b[i][k]=b_[k];
			}
		}
	}
	k=0;
	for(i=0;i<3;i++)
	{
		if(a__[i]>b__[i])
		num++;
		else if(a__[i]<b__[i])
		k++;
	}
	if(num>k)
	printf("Winner is A!\n");
	else if(num<k)
	printf("Winner is B!\n");
	else
	printf("Winner is X!\n");
	printf("A: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==2&&j==2)
			putchar('\n');
			else if(a[i][1]=='1'&&a[i][2]=='0')
			{
				putchar(a[i][j]);
				if(j==2)
				putchar(' ');
			}
			else
			putchar(a[i][j]);
		}
	}
	printf("B: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==2&&j==2)
			putchar('\n');
			else if(b[i][1]=='1'&&b[i][2]=='0')
			{
				putchar(b[i][j]);
				if(j==2)
				putchar(' ');
			}
			else
			putchar(b[i][j]);
		}
	}
}
