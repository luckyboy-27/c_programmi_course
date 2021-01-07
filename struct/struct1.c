#include <stdio.h>
#include <string.h>


int main() {    
    struct scores {
        char name[32];
        int score;

    };
    struct scores player[4];
    int x;

    for (x=0; x<4; x++) {
        printf("enter player %d: ", x+1);
        scanf("%s", player[x].name);
        printf("enter score: ");
        scanf("%d", &player[x].score);
    }

    puts("player infor");
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++) {
        printf("%d\t%s\t%5d\n", x+1, player[x].name, player[x].score);
    }
    return 0;
}
