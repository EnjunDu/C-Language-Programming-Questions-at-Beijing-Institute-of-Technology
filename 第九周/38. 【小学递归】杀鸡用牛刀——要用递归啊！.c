#include <stdio.h>
#include <stdlib.h>
void reverse(char str[], int start, int end)
{
    if (start >= end) {
        return;  // 递归结束条件：当 start 大于等于 end 时结束
    }

    char tmp = str[start];  // 交换 start 和 end 处的字符
    str[start] = str[end];
    str[end] = tmp;

    reverse(str, start+1, end-1);  // 递归处理 start+1 到 end-1 的字符
}
int main( )  
{   char str[100];  
    int start, end;  
    gets(str);  
    scanf("%d%d", &start, &end);  
    reverse( str, start, end );  
    printf("%s\n", str);  
    return 0;  
}  

