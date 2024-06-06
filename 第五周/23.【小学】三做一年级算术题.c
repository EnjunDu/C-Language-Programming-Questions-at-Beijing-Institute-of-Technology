int main ()
{
	char k[10]={0},x,op;
	int i=0,M=0,m=10;
	do
	{
		x=getchar();
		if(x<='9'&&x>='0') k[i++] = x-'0';
		else if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%') op = x;
	}
	while(x!='\n');
	for(i--;i>=0;i--)
	{
		M=M<k[i]?k[i]:M;
		m=m>k[i]?k[i]:m;
	}
	switch(op)
	{
		case '+':printf("%d+%d=%d\n",M,m,M+m);break;
		case '-':printf("%d-%d=%d\n",M,m,M-m);break;
		case '*':printf("%d*%d=%d\n",M,m,M*m);break;
		case '/':if(m==0) printf("Error!\n");else printf("%d/%d=%d\n",M,m,M/m);break;
		case '%':if(m==0) printf("Error!\n");else printf("%d%%%d=%d\n",M,m,M%m);break;
	}
	
} 
