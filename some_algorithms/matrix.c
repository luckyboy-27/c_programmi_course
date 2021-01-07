#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void FlipRow(int *row, int columns)
{
    for (int index = 0; index < columns / 2; index++)
    {
        swap(row+index, row+columns-1-index);
    } 
}

void HFlipArray(int **array, int columns, int rows)
{   
    int new;
    for (int row = 0; row < rows; row++)
    {
        FlipRow(array[row], columns);
    }
}

int main() {
    int a1[2] = {1, 2};
    int a2[2] = {2, 3};
    int a3[2] = {4, 5};
    int *num[3] = {a1, a2, a3};
    HFlipArray(num, 4, 3);
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            printf("%d\n", num[i][j]);
        }
    }

}