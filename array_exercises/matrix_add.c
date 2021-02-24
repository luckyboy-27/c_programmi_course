#include <stdio.h>

int matrix_add(int a[100][100], int b[100][100], int row, int col);

int main() {
    int r, c, a[100][100], b[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    matrix_add(a, b, r, c);
    putchar('\n');
    return 0;
}

int matrix_add(int a[100][100], int b[100][100], int row, int col) {
    int i,j, sum[100][100];
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d\t", sum[i][j]);
            if (j == col - 1) {
                printf("\n\n");
            }
        }
    }
    return 0;
}