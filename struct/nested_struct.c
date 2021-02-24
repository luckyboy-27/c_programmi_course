#include <stdio.h>
#include <string.h>

int main() {
    struct date {
        int month;
        int day;
        int year;
    }; 
    struct human {
        char name[45];
        struct date birthday;
    };

    struct human president;
    strcpy(president.name, "President Vinh");
    president.birthday.month = 27;
    president.birthday.day = 12;
    president.birthday.year = 2000;

    printf("%s was born on %d/%d/%d\n", president.name, president.birthday.day, president.birthday.month, president.birthday.year);
    return 0;
}