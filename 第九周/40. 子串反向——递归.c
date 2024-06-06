#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
void reverse(char str[], int start, int end) {
    int len = strlen(str);
    if (start < 0)
        start = 0;
    if (end >= len)
        end = len - 1;
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1);
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
