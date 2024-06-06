#include<stdio.h>  
#include<string.h>   
int main()  
{  
    int i,j,r=0,h=0; //r是小标值，不是个数 
    char ch[100]={0},temp[50]={0};//初始化防止后续位置元素干扰   
    char str[20][50] = {0}; //这部很关键 ，解决最后一个单词后面的'\0'问题
    gets(ch);  
    for(i=0;ch[i]!='\0';i++)  //从字母串里取单词的算法，用二维数组来解决
    {  
        if(ch[i]!=' ')  
        {  
            str[r][h++]=ch[i];  
        }  
        else   
        {  
            str[r][h++]='\0'; 
            //注意此处如果是最后一个'\0'，这样是加不上的，因为最后一个不是空格
            r++;  //一个单词收集结束，进入下一行
            h=0;  //重新收集单词
        }  
    }  
    for(i=0;i<r;i++)  //选择排序法，
    {  
        for(j=i+1;j<=r;j++)  
        {  
            if(strcmp(str[j],str[i])<0)  //使用字符串处理函数
            {  
                strcpy(temp,str[j]);  
                strcpy(str[j],str[i]);  
                strcpy(str[i],temp);  
            }  
        }  
    }  
    for(i=0;i<=r;i++)  
    {  
        printf("%s",str[i]);  
        //%s可以对一个字符串进行整体的输入输出，但对于数值型数组是不能利用数组名整体输出的
        if(i!=r)  
        printf(" ");  
    }  
    printf("\n");  
}  
