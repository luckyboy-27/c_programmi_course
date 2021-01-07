#include <stdio.h>

int main() {    
    int x[2][3] = {{5, 12, 17}, {13, 4, 8}};
    int y[3][4] = {{1, 3, 5, 3}, {2, 3, 2, 7}, {3, 4, 6, 8}};
    int result[10][10];
    int i, j, k;

    for (int x=0; x<2; x++) {
        for (int y =0; y<4; y++) {
            result[x][y] = 0;
        }
    }

    for (i=0; i<2; i++) {
        for (j=0; j<4; j++) {
            for (k=0; k<3; k++) {
                result[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    printf("\noutput matrix:\n");
    for (int a=0; a<2; a++) {
        for (int b=0; b<4; b++) {
            printf("%d\t", result[a][b]);
        }
        printf("\n");
    }

    putchar('\n');
    return 0;
}