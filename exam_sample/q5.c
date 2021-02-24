#include <stdio.h>

//Write a function to search if an element is contained in an array
int search(int arr[100], int length, int element);

int main() {
    int arr[9] = {12, 24, 423, 31, 3131, 438, 21, 233, 31};
    printf("position of element is: %d\n", search(arr, 9, 3131));
    return 0; 
}

int search(int arr[100], int length, int element) {
    int i;
    int x = 0;
    for (i=0; i<length; i++) {
        if (element == arr[i]) {
            x+=i;
        }
    }
    return x;
}