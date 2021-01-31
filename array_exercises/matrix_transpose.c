#include <stdio.h>

int matrix_transpose(int a[100][100], int row, int col);

int main() {
    int r, c, a[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Enter matrix: \n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }
    printf("\n");
    printf("Transpose matrix: \n");
    matrix_transpose(a, r, c);
    putchar('\n');
    return 0;
}

int matrix_transpose(int a[100][100], int row, int col) {
    int i,j, transpose_mtr[100][100];
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++) {
            transpose_mtr[i][j] = a[j][i];
        }
    }
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d\t", transpose_mtr[i][j]);
            if (j == col - 1) {
                printf("\n\n");
            }
        }
    }
    return 0;
}