#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function to generate and return random numbers */
int * getRandom( ) {

    static int  r[10];
    int i;
    srand( (unsigned)time( NULL ) );
  
    for ( i = 0; i < 10; ++i) {
        r[i] = rand() % 100;  // modulo 100 to take randomly in range of 100
        printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}
// use pointer function to return an array, can be the same with string data types
int main () {
    int *p;
    int i;

    p = getRandom();

    for ( i = 0; i < 10; i++ ) {
        printf( "*(p + %d) : %d\n", i, *(p + i));
    }

return 0;
}