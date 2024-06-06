#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char ac[3][3]={0},bc[3][3]={0},temp[3][3];
	int i;
// 读入两个数组
	for(i=0;i<3;i++){
		char w[3]={0};
		scanf("%s",w);
		if (strlen(w) == 2)
			{ac[i][0]=w[0];
				ac[i][1]=w[1];}
				else {ac[i][0]=w[0];
					  ac[i][1]='1';}
	}
	for(i=0;i<3;i++){
			char w[3];
			scanf("%s",w);
		if (strlen(w) == 2)
		{bc[i][0]=w[0];
			bc[i][1]=w[1];}
			else {bc[i][0]=w[0];
				bc[i][1]='1';	}
		}
// 判断输入是否合法
for(i=0;i<3;i++){
	if(ac[i][0]!='H'&&ac[i][0]!='S'&&ac[i][0]!='D'&&ac[i][0]!='C'){
		printf("Input Error!\n");
		exit(0);
	}
	if((ac[i][1]!='J'&&ac[i][1]!='Q'&&ac[i][1]!='K'&&ac[i][1]!='A')&&(ac[i][1]<'1'||ac[i][1]>'9'))
	{
		printf("Input Error!\n");
				exit(0);
	}
	if(bc[i][0]!='H'&&bc[i][0]!='S'&&bc[i][0]!='D'&&bc[i][0]!='C'){
			printf("Input Error!\n");
			exit(0);
		}
		if((bc[i][1]!='J'&&bc[i][1]!='Q'&&bc[i][1]!='K'&&bc[i][1]!='A')&&(bc[i][1]<'1'||bc[i][1]>'9'))
		{
			printf("Input Error!\n");
					exit(0);
		}
}
    // 判断是否有相同的牌
    for (i = 0; i < 3; i++) {
        int j;
        for (j = i + 1; j < 3; j++) {
            if (ac[i][0] == ac[j][0] && ac[i][1] == ac[j][1]) {
                printf("Input Error!\n");
                exit(0);
            }
            if (bc[i][0] == bc[j][0] && bc[i][1] == bc[j][1]) {
                printf("Input Error!\n");
                exit(0);
            }
        }
    }
	int a[3],b[3],a1[3],b1[3],temp1[3];
// 将牌面大小排序
for(i=0;i<3;i++){
	{if(ac[i][1]>='2'&&ac[i][1]<='9'){
		a[i]=ac[i][1]-'0';
	}
	else
	{
	if(ac[i][1]=='1'){a[i]='=';}
	if(ac[i][1]=='J'){a[i]='2';}
	if(ac[i][1]=='Q'){a[i]='3';}
	if(ac[i][1]=='K'){a[i]='4';}
	if(ac[i][1]=='A'){a[i]='5';}
}	
}{if(bc[i][1]>='2'&&bc[i][1]<='9'){
		b[i]=bc[i][1]-'0';
	}
	else
	{
	if(bc[i][1]=='1'){b[i]='=';}
	if(bc[i][1]=='J'){b[i]='2';}
	if(bc[i][1]=='Q'){b[i]='3';}
	if(bc[i][1]=='K'){b[i]='4';}
	if(bc[i][1]=='A'){b[i]='5';}
}}}
//将花色排序
for(i=0;i<3;i++){
	if(ac[i][0]=='C'){a1[i]=1;}
	if(ac[i][0]=='D'){a1[i]=2;}
	if(ac[i][0]=='S'){a1[i]=3;}
	if(ac[i][0]=='H'){a1[i]=4;}
	if(bc[i][0]=='C'){b1[i]=1;}
	if(bc[i][0]=='D'){b1[i]=2;}
	if(bc[i][0]=='S'){b1[i]=3;}
	if(bc[i][0]=='H'){b1[i]=4;}
}
for(int j=0;j<3;j++)
{for(int i=j;i<2;i++){
	if(a1[i]<a1[i+1]){
		temp1[i]=a1[i];
		a1[i]=a1[i+1];
		a1[i+1]=temp1[i];
		
		temp[i][0]=ac[i][0];
		ac[i][0]=ac[i+1][0];
		ac[i+1][0]=temp[i][0];
		temp[i][1]=ac[i][1];
		ac[i][1]=ac[i+1][1];
		ac[i+1][1]=temp[i][1];
	}
	if(b1[i]<b1[i+1]){
		temp1[i]=b1[i];
		b1[i]=b1[i+1];
		b1[i+1]=temp1[i];
		
		temp[i][0]=bc[i][0];
		bc[i][0]=bc[i+1][0];
		bc[i+1][0]=temp[i][0];
		temp[i][1]=bc[i][1];
		bc[i][1]=bc[i+1][1];
		bc[i+1][1]=temp[i][1];
	}
	if(a1[i]=a1[i+1]&&a[i]<a[i+1]){
			temp1[i]=a[i];
			a[i]=a[i+1];
			a[i+1]=temp1[i];
			temp[i][0]=ac[i][0];
			ac[i][0]=ac[i+1][0];
			ac[i+1][0]=temp[i][0];
			temp[i][1]=ac[i][1];
			ac[i][1]=ac[i+1][1];
			ac[i+1][1]=temp[i][1];	
	}
	if(b1[i]=b1[i+1]&&b[i]<b[i+1]){
			temp1[i]=b[i];
			b[i]=b[i+1];
			b[i+1]=temp1[i];
			temp[i][0]=bc[i][0];
			bc[i][0]=bc[i+1][0];
			bc[i+1][0]=temp[i][0];
			temp[i][1]=bc[i][1];
			bc[i][1]=bc[i+1][1];
			bc[i+1][1]=temp[i][1];	
	}
}}
if(a1[1]==b1[1]&&a1[0]==b1[0]&&a1[2]==b1[2]&&a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2]){
	printf("Winner is X!\n");
	goto ff;
}
 else 
for(i=0;i<2;i++){
	for(int j=i;j<2;j++){
	if(a1[i]>b1[i]){
		printf("Winner is A!\n");
		goto ff;
	}
	else if(a1[i]<b1[i]){printf("Winner is B!\n");
			goto ff;}
    else  if (a1[i]=b1[i]){
	if(a[i]>b[i])
				{printf("Winner is A!\n");
						goto ff;}
    else if(a[i]<b[i])
				{printf("Winner is B!\n");
						goto ff;}
	}}}

ff:
	printf("A: %c%c %c%c %c%c\n",ac[0][0],ac[0][1],ac[1][0],ac[1][1],ac[2][0],ac[2][1]);
printf("B: %c%c %c%c %c%c\n",bc[0][0],bc[0][1],bc[1][0],bc[1][1],bc[2][0],bc[2][1]);
return 0;
}
