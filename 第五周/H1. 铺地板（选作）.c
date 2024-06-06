#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i = 0, j = n / 2, k;
    for (k = 1; k <= n * n; ++k)
    {
        a[i][j] = k;
        i -= 1;
        j += 1;
        if (k % n == 0)
        {
            i += 2;
            --j;
        }
        else
        {
            if (j == n)
                j -= n;
            else if (i < 0)
                i += n;
        }
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
