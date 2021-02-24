#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i , n1, n2;
    printf("number of elements: ");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
    printf("adress: %p", ptr);
    
    printf("\nnumber of elements again: ");
    scanf("%d", &n2);
    // phân bổ lại vùng nhớ
    ptr = (int*) realloc(ptr, n2 * sizeof(int));
    printf("New address: %p\n", ptr);
    // giải phóng
    free(ptr);
    return 0;
}
 