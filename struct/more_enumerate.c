#include <stdio.h>

enum week{Mon=1, Tue=2, Wed=3, Thur=4, Fri=5, Sat=6, Sun=0};
 
int main() {
    enum week day;
    day = Wed;
    printf("%d\n", day);
    return 0;
}

//simply using switch case