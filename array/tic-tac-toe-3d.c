#include <stdio.h>

int main() {
    char tictactoe[3][3][3];
    int x, y, z;

    for (x=0; x<3; x++) {
        for (y=0; y<3; y++) {
            for (z=0; z<3; z++) {
                tictactoe[x][y][z] = '.';
            }
        }
    }
    tictactoe[1][1][1] = 'X';

    for (z=0; z<3; z++) {
        for (y=0; y<3; y++) {
            printf("%c ", tictactoe[x][y][z]);
        }
        putchar('\n');
    }
    return 0; 
 }