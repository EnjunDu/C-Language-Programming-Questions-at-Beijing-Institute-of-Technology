#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') { 
        ch = ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    }
    printf("%c\n", ch);
    return 0;
}
