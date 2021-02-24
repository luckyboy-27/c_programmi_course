#include <stdio.h>

enum week{Mon=1, Tue=2, W=3, T=4, Fri=5, Sat=6, Sun=0};
 
int main() {
    enum week day;
    char a[10] = "WT";
    for(int i=0; i<2; i++) {
        day = a[i];
        printf("%d\n", day);
    }
    return 0;
}

//simply using switch case