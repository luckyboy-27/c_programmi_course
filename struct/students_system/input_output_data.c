#include <stdio.h>
#include <stdlib.h>

struct students {
    int id; 
    int age;
    char name[50];
    char course[50];
};
int main() {
    struct students *ptr;
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // allocating memory for n numbers of struct students
    ptr = (struct students*) malloc(n * sizeof(struct students));
    for(i = 0; i < n; ++i)
    {
        printf("Enter students %d id and age respectively: ", i);
        scanf("%d %d", &(ptr+i)->id, &(ptr+i)->age);
        printf("Enter students %d name and course respectively: ", i);
        scanf("%s %s", (ptr+i)->name, (ptr+i)->course);
        // To access members of 1st struct students,
        // ptr->name and ptr->age is used
        // To access members of 2nd struct students,
        // (ptr+1)->name and (ptr+1)->age is used
    }

    printf("Displaying Information:\n");
    for(i = 0; i < n; ++i)
        printf("Name: %s\tAge: %d\tID: %d\tMayor: %s\n", (ptr+i)->name, (ptr+i)->age, (ptr+i)->id, (ptr+i)->course);
    free(ptr);
    return 0;
}