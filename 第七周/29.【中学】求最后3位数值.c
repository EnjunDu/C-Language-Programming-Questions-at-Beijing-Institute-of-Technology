#include <stdio.h>

int main() {
    int a, n, result = 1;
    scanf("%d %d", &a, &n);
    for (int i = 0; i < n; i++) {
        result = (result * a) % 1000;
    }
    if(result%1000==0){printf("The last 3 numbers is 000.\n");}
    else 
    printf("The last 3 numbers is %d.\n", result);
    return 0;
}
