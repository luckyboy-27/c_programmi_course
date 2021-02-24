#include <stdio.h>

int main() {
    //initialize
    struct scores {
        char name[32];
        int score;

    };
    struct scores player[4];
    int x;
    int temp;
    int i = 0;

    //input data
    for (x=0; x<4; x++) {
        printf("enter player %d: ", x+1);
        scanf("%s", player[x].name);
        printf("enter score: ");
        scanf("%d", &player[x].score);
    }

    //sort data using buble sort
    while (i<3) {
        if (player[i].score < player[i+1].score) {
            temp = player[i].score;
            player[i].score = player[i+1].score;
            player[i+1].score = temp;
            i = -1;
        }
        i+=1;
    }

    //display data
    puts("player infor");
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++) {
        printf("%d\t%s\t%5d\n", x+1, player[x].name, player[x].score);
    }
    return 0;
}
