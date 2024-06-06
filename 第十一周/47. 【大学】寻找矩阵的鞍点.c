#include <stdio.h>

void findSaddlePoint(int matrix[][100], int rows, int cols) {
    int saddlePointRow = -1;
    int saddlePointCol = -1;

    for (int i = 0; i < rows; i++) {
        int rowMax = matrix[i][0];
        int colIndex = 0;

        // �ҵ����ϵ����ֵ
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
                colIndex = j;
            }
        }

        // �������ֵ�Ƿ�Ҳ�������е���Сֵ
        int isSaddlePoint = 1;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][colIndex] < rowMax) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint) {
            saddlePointRow = i;
            saddlePointCol = colIndex;
            break;
        }
    }

    if (saddlePointRow != -1 && saddlePointCol != -1) {
        printf("Point:a[%d][%d]==%d\n", saddlePointRow, saddlePointCol, matrix[saddlePointRow][saddlePointCol]);
    } else {
        printf("No Point\n");
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    findSaddlePoint(matrix, rows, cols);

    return 0;
}
