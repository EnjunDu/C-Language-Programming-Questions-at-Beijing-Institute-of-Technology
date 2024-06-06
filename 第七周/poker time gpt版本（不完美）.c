#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ac[3][2], bc[3][2], temp[3][2];
    int i;
    // ������������
    for(i = 0; i < 3; i++) {
        char w[3];
        scanf("%s", w);
        if (strlen(w) == 2) {
            ac[i][0] = w[0];
            ac[i][1] = w[1];
        } else {
            ac[i][0] = w[0];
            ac[i][1] = '1';
        }
    }
    for(i = 0; i < 3; i++) {
        char w[3];
        scanf("%s", w);
        if (strlen(w) == 2) {
            bc[i][0] = w[0];
            bc[i][1] = w[1];
        } else {
            bc[i][0] = w[0];
            bc[i][1] = '1';
        }
    }
    // �ж������Ƿ�Ϸ�
    for(i = 0; i < 3; i++) {
        if(ac[i][0] != 'H' && ac[i][0] != 'S' && ac[i][0] != 'D' && ac[i][0] != 'C') {
            printf("Input Error!\n");
            exit(0);
        }
        if((ac[i][1] != 'J' && ac[i][1] != 'Q' && ac[i][1] != 'K' && ac[i][1] != 'A') && (ac[i][1] < '1' || ac[i][1] > '9')) {
            printf("Input Error!\n");
            exit(0);
        }
        if(bc[i][0] != 'H' && bc[i][0] != 'S' && bc[i][0] != 'D' && bc[i][0] != 'C') {
            printf("Input Error!\n");
            exit(0);
        }
        if((bc[i][1] != 'J' && bc[i][1] != 'Q' && bc[i][1] != 'K' && bc[i][1] != 'A') && (bc[i][1] < '1' || bc[i][1] > '9')) {
            printf("Input Error!\n");
            exit(0);
        }
    }
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
    int a[3], b[3], a1[3], b1[3], temp1[3];
    // �������С����
    for(i = 0; i < 3; i++) {
        if(ac[i][1] >= '2' && ac[i][1] <= '9') {
            a[i] = ac[i][1] - '0';
        } else {
            if(ac[i][1] == '1') {
                a[i] = 1;  // ��'1'ת��Ϊ1
            }
            if(ac[i][1] == 'J') {
                a[i] = 11;  // ��'J'ת��Ϊ11
            }
            if(ac[i][1] == 'Q') {
                a[i] = 12;  // ��'Q'ת��Ϊ12
            }
            if(ac[i][1] == 'K') {
                a[i] = 13; 
        a[i] = 13;  // ��'K'ת��Ϊ13
        if(ac[i][1] == 'A') {
            a[i] = 14;  // ��'A'ת��Ϊ14
        }
    }
}}
for(i = 0; i < 3; i++) {
    if(bc[i][1] >= '2' && bc[i][1] <= '9') {
        b[i] = bc[i][1] - '0';
    } else {
        if(bc[i][1] == '1') {
            b[i] = 1;
        }
        if(bc[i][1] == 'J') {
            b[i] = 11;
        }
        if(bc[i][1] == 'Q') {
            b[i] = 12;
        }
        if(bc[i][1] == 'K') {
            b[i] = 13;
        }
        if(bc[i][1] == 'A') {
            b[i] = 14;
        }
    }
}
// ���������С����ʹ��ð������
for(i = 0; i < 3; i++) {
    a1[i] = a[i];
    b1[i] = b[i];
}
int j;
for(i = 0; i < 2; i++) {
    for(j = 0; j < 2 - i; j++) {
        if(a1[j] > a1[j + 1]) {
            int t = a1[j];
            a1[j] = a1[j + 1];
            a1[j + 1] = t;
        }
        if(b1[j] > b1[j + 1]) {
            int t = b1[j];
            b1[j] = b1[j + 1];
            b1[j + 1] = t;
        }
    }
}
// �Ƚϴ�С
if(a1[2] > b1[2]) {
    printf("A wins\n");
} else if(a1[2] < b1[2]) {
    printf("B wins\n");
} else {
    // �����������ͬ���ͱȽϵڶ������
    if(a1[1] > b1[1]) {
        printf("A wins\n");
    } else if(a1[1] < b1[1]) {
        printf("B wins\n");
    } else {
        // ����ڶ������Ҳ��ͬ���ͱȽ���С����
        if(a1[0] > b1[0]) {
            printf("A wins\n");
        } else if(a1[0] < b1[0]) {
            printf("B wins\n");
        } else {
            printf("Tie\n");
        }
    }
}
return 0;
}
