#include <stdio.h>

int main() {

    //variables
    int x;
    int temp;
    int i = 0;
    //initialize
    struct scores {
        int score;
    };
    struct human {
        char name[45];
        struct scores player[4];
    }; 
    struct human solider[4];

    //input data
    for (x=0; x<4; x++) {
        printf("enter player %d: ", x+1);
        scanf("%s", solider[x].name);
        printf("enter score: ");
        scanf("%d", &solider[x].player[x].score);
    }

    //sort data using buble sort
    while (i<3) {
        if (solider[i].player[i].score < solider[i+1].player[i+1].score) {
            temp = solider[i].player[i].score;
            solider[i].player[i].score = solider[i+1].player[i+1].score;
            solider[i+1].player[i+1].score = temp;
            i = -1;
        }
        i+=1;
    }

    //display data
    puts("player infor");
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++) {
        printf("%d\t%s\t%5d\n", x+1, solider[x].name, solider[x].player[x].score);
    }
    return 0;
}
