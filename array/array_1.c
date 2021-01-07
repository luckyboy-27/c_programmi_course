#include <stdio.h>

int main() {
    int highscores[4];
    for (int i=0; i<4; i++) {
        printf("your #%d score: ", i + 1);
        scanf("%d", &highscores[i]);
    }
    puts("here are your high score");
    for (int x = 0; x<4; x++){
        printf("#%d %d\n", x+1, highscores[x]);
    }
    return 0;
}
