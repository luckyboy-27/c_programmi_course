#include <stdio.h>
#include <stdlib.h>

struct students {
    int id; 
    int age;
    int math, english, physisc;
    float average;
    char name[50];
    char course[50];
};
typedef struct students stud;
float average_compute(stud avg);

int main() {
    stud *ptr;
    stud scores;
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // allocating memory for n numbers of struct students
    ptr = (stud*) malloc(n * sizeof(stud));
    for(i = 0; i < n; ++i) {
        printf("Enter students %d name: ", i);
        scanf("%s", (ptr+i)->name);
        printf("Enter students %d scores respectively: ", i);
        scanf("%d %d %d", &scores.math, &scores.english, &scores.physisc);
        // To access members of 1st struct students,
        // ptr->name and ptr->age is used
        // To access members of 2nd struct students,
        // (ptr+1)->name and (ptr+1)->age is used
    }
    scores.average = average_compute(scores);
    printf("Displaying Information:\n");
    for(i = 0; i < n; ++i)
        printf("Name: %s\tAverage: %f\tScore %d %d %d\n", (ptr+i)->name, scores.average, scores.math, scores.english, scores.physisc);

    putchar('\n');
    free(ptr);
    return 0;
}

float average_compute(stud avg) { 
    return avg.average = (avg.math + avg.english + avg.physisc)/3;
}