#include <stdio.h>
#include <stdlib.h>
void reverse(char str[], int start, int end)
{
    if (start >= end) {
        return;  // �ݹ������������ start ���ڵ��� end ʱ����
    }

    char tmp = str[start];  // ���� start �� end �����ַ�
    str[start] = str[end];
    str[end] = tmp;

    reverse(str, start+1, end-1);  // �ݹ鴦�� start+1 �� end-1 ���ַ�
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

