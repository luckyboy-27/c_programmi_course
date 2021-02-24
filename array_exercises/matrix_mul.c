#include <stdio.h>

int matrix_mul(int a[100][100], int b[100][100], int row1, int col1, int row2, int col2);

int main() {
    int r1, c1, r2, c2, a[100][100], b[100][100], i, j;
    printf("Enter the number of rows for matrix 1 (between 1 and 100): ");
    scanf("%d", &r1);
    printf("Enter the number of columns for matrix 1 (between 1 and 100): ");
    scanf("%d", &c1);

    printf("Enter the number of rows for matrix 2 (between 1 and 100): ");
    scanf("%d", &r2);
    printf("Enter the number of columns for matrix 2 (between 1 and 100): ");
    scanf("%d", &c2);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    if (c1 != r2) {
        printf("the size of matrices is not suitable. Number of Columns in matrix 1 must be equal to number of columns in matrix 2");
    }
    else {
        printf("Output: \n");
        matrix_mul(a, b, r1, c1, r2, c2);
    }
    putchar('\n');
    return 0;
}

int matrix_mul(int a[100][100], int b[100][100], int row1, int col1, int row2, int col2) {
    int i,j,k, product[100][100];
    for (i=0; i<row1; i++) {
        for (j=0; j<col2; j++) {
            for (k=0; k< col1; ++k) {
                product[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j) {
            printf("%d\t", product[i][j]);
            if (j == col2 - 1) {
                printf("\n");
            }
        }
    }
    return 0;
}
