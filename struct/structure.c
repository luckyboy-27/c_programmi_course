#include <stdio.h>
#include <string.h>
    

int main() {

    struct tdc {
        char name[50];
        char crush[50];
        char gender[10];
        int student_id;
    };

    struct tdc david;
    struct tdc trung;

    // David
    strcpy(david.name, "Phu Quang");
    strcpy(david.crush, "Thao Mint");
    strcpy(david.gender, "Male");
    david.student_id = 15890;

    // Trung
    strcpy(trung.name, "Quoc Trung");
    strcpy(trung.crush, "Thanh Cloud");
    strcpy(trung.gender, "Male");
    trung.student_id = 15657;

    // thang
    struct tdc thang = {"Thang", "Linh Dan", "Male", 15652};
    // print
    //printf("%s\n%s\n%s\n", thang.name, thang.crush, thang.gender);

    struct books {
        char title[40];
        int id;
    } book1 = {"c for dummies", 1};
    printf("%s\n", book1.title); 
    


    
}