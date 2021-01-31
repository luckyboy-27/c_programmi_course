#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inputArray(int *arr, int length);
void outputArray(int *arr, int length);
void addElement(int *arr, int *length, int element, int position);
void deleteElement(int *arr, int *length, int position);

int main() {
    //initialize array
    int length;
    printf("Enter the length of your array: ");
    scanf("%d", &length);
    int *arr;
    arr = (int *)malloc(sizeof(int) * length);
    if (arr == NULL) {
        exit(1);
    }
    printf("Array is initialized\n");

    //testing
    inputArray(arr, length);
    outputArray(arr, length);
    deleteElement(arr, &length, 2);
    addElement(arr, &length, 4, 2);
    outputArray(arr, length);

    //free memory
    free(arr);
    putchar('\n');
    return 0;
}

void inputArray(int arr[], int length) {
    int i;
    printf("Enter the elements of array: \n");
    for (i=0; i<length; i++) {
        scanf("%d", arr + i);
    }
}
void outputArray(int arr[], int length) {
    int i;
    printf("Your array: \n");
    for (i=0; i<length; i++) {
        printf("%d ", *(arr + i));
    }
}

// can use "int length" as well, i just use the "*" due to my habit :))
void addElement(int arr[], int *length, int element, int position) {
    // the base case of the function if we input some strang position, it can still work fine
    if (position<0) {
        position = 0;
    }
    else if (position>*length) {
        position = *length;
    }
    for(int i = *length; i > position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    //increase the size of the array so that it can contain the new element added
    ++length;
}

void deleteElement(int arr[], int *length, int position) {
    if (length<=0) {
        printf("error");
    }
    
    if (position <0) {
        position = 0;
    }
    else if (position >= *length) {
        position = *length-1;
    }

    for(int i = position; i < *length-1; i++){
        arr[i] = arr[i+1];
    }
    //decreasing the size so that it can hold the others after deleting 1 elements
    --length;
}
