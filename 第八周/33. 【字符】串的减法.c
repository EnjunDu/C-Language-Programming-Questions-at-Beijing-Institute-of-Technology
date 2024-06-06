#include <stdio.h>
#include <string.h>
#define MAX_LEN 80
int main() {
    char s[MAX_LEN + 1], t[MAX_LEN + 1], u[MAX_LEN + 1];
    int in_t[128] = {0}; // 标记字符是否在t中出现
    int len_s, len_t, len_u, i;
    // 读入s和t
    fgets(s, MAX_LEN + 1, stdin);
    fgets(t, MAX_LEN + 1, stdin);
    len_s = strlen(s);
    len_t = strlen(t);
    if (s[len_s - 1] == '\n') {
        s[--len_s] = '\0';
    }
    if (t[len_t - 1] == '\n') {
        t[--len_t] = '\0';
    }
    // 标记t中出现的字符
    for (i = 0; i < len_t; i++) {
        in_t[t[i]] = 1;
    }
    // 构造u
    len_u = 0;
    for (i = 0; i < len_s; i++) {
        if (!in_t[s[i]]) {
            u[len_u++] = s[i];
        }
    }
    u[len_u] = '\0';
    // 输出u
    printf("%s\n", u);
    return 0;
}
