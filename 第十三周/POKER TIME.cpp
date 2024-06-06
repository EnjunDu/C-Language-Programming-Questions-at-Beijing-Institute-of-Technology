#include <stdio.h>    
int one(char a) {    
    if ('2' <= a && a <= '9') {    
        return a - '0';    
    } else if (a == 'J') {    
        return 11;    
    } else if (a == 'Q') {    
        return 12;    
    } else if (a == 'K') {    
        return 13;    
    } else if (a == 'A') {    
        return 14;    
    } else if(a=='1'){    
        return 10;    
    }else {    
        return -1;    
    }    
}    
    
int two(char a) {    
    switch (a) {    
        case 'H':    
            return 40;    
            break;    
        case 'S':    
            return 30;    
            break;    
        case 'D':    
            return 20;    
            break;    
        case 'C':    
            return 10;    
            break;    
        default:    
            return -1;    
    }    
}    
    
void three(char a[2][3]) {    
    int i, j;    
    char temp;    
    for (i = 0; i <= 2; i++) {    
        for (j = 0; j < 2 - i; j++) {    
            if (two(a[0][j]) < two(a[0][j + 1])) {    
                temp = a[0][j];    
                a[0][j] = a[0][j + 1];    
                a[0][j + 1] = temp;    
                temp = a[1][j];    
                a[1][j] = a[1][j + 1];    
                a[1][j + 1] = temp;    
            }    
        }    
    }    
    for (i = 0; i <= 2; i++) {    
        for (j = 0; j < 2 - i; j++) {    
            if (a[0][j] == a[0][j + 1]) {    
                if ((a[0][j] == a[0][j + 1]) && (one(a[1][j]) < one(a[1][j + 1]))) {    
                    temp = a[1][j];    
                    a[1][j] = a[1][j + 1];    
                    a[1][j + 1] = temp;    
                }    
            }    
        }    
    }    
}    
    
int main() {    
    int i, j;    
    char a[2][3];    
    char b[2][3];    
    int flag = 1;    
    char c; 
for (j = 0; j < 3; j++) {  
        for (i = 0; i < 2; i++) {  
            scanf(" %c", &c);  
            if (c != '1') {  
                a[i][j] = c;  
            }  
            else{  
                scanf("%c",&c);  
                a[i][j]='1';  
            }  
        }  
    }  
  
    for (j = 0; j < 3; j++) {  
        for (i = 0; i < 2; i++) {  
            scanf(" %c", &c);  
             if (c != '1') {  
                            b[i][j] = c;  
                        }  
                        else{  
                            scanf("%c",&c);  
                            b[i][j]='1';  
            }  
        }  
    }  
    for(i=0;i<3;i++){    
        if(two(a[0][i])==-1||two(b[0][i])==-1){    
            printf("Input Error!\n");    
             flag=0;    
            break;    
        }    
        if(one(a[1][i])==-1||one(b[1][i])==-1){    
            printf("Input Error!\n");    
             flag=0;    
            break;    
        }    
    }    
    if(flag==1){    
    for(i=0;i<3;i++){    
        if(flag==1){    
        for(j=0;j<2-i;j++){    
        if(two(a[0][j]==two(a[0][j+1]))&&(one(a[1][j])==one(a[1][j+1]))){    
            printf("Input Error!\n");    
                         flag=0;    
                        break;    
        }    
    }    
    }    
    }    
        for(i=0;i<3;i++){    
            if(flag==1){    
            for(j=0;j<2-i;j++){    
            if(two(b[0][j]==two(b[0][j+1]))&&(one(b[1][j])==one(b[1][j+1]))){    
                printf("Input Error!\n");    
                             flag=0;    
                            break;    
            }    
        }    
        }    
        }    
    }    
    if(flag==1){    
    three (a);    
    three (b);        
for(j=0;j<=2;j++){    
    flag=1;     
                   if (two(a[0][j]) > two(b[0][j])) {     
                     printf("Winner is A!\n");     
                     break;     
                } else if (two(a[0][j]) < two(b[0][j])) {     
                      printf("Winner is B!\n");     
                     break;     
                } else if (two(a[0][j]) == two(b[0][j])) {     
                    if (one(a[1][j]) > one(b[1][j])) {     
                         printf("Winner is A!\n");     
                         break;     
                    } else if (one(a[1][j]) < one(b[1][j])) {     
                          printf("Winner is B!\n");     
                         break;     
                    } else if (two(a[1][j]) == two(b[1][j])) {     
                        flag = 0;     
                         continue;     
                     }     
                 }     
    }    
             if (flag == 0) {     
                  printf("Winner is X!\n");     
             }     
        printf("A: ");    
        for (j = 0; j <= 2; j++) {    
            for (i = 0; i <= 1; i++) {    
                if(one(a[i][j])==10){    
                    printf("10");    
                }    
                else{    
                printf("%c", a[i][j]);    
            }    
            }    
            if (j == 2) {    
                printf("\n");    
            } else {    
                printf(" ");    
            }    
        }    
             printf("B: ");    
        for (j = 0; j <= 2; j++) {    
            for (i = 0; i <= 1; i++) {    
                    if(one(b[i][j])==10){    
                                    printf("10");    
                                }    
            else{    
                printf("%c", b[i][j]);    
            }    
            }    
            if (j == 2) {    
                printf("\n");    
            } else {    
                printf(" ");    
            }    
        }    
    }    
        return 0;    
    }  
