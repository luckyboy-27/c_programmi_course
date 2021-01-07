#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float *temperatures;
    char ask_for_convert[10];
    float k;
    float k2;

    temperatures = (float *)malloc(sizeof(float) * 1);
    if (temperatures==NULL) {
        puts("Unable to allocate memory");
        exit(1);
    }

    printf("Input Temperature: ");
    scanf("%f", temperatures);
    printf("Fahrenheit or Celcius? ");
    scanf("%s", ask_for_convert);
    if (strcmp(ask_for_convert, "c")==0) {
        k = *temperatures + 273.15; 
    }
    else if (strcmp(ask_for_convert, "f") == 0) {
        k2 = (*temperatures + 459.67) * (5/9);
    }
    printf("%f\n", k);
    free(temperatures);
    return 0;

}