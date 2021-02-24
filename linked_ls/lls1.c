#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main() {
    struct stk {
        char symbol[5];
        int quantity;
        float price;
    };
    struct stk *invest;

    /* allocate structure */
    invest = (struct stk *)malloc(sizeof(struct stk)*1); 
    if (invest==NULL) {
        exit(1);
    }

    /* assign structure data */ 
    strcpy(invest->symbol,"GOOG"); 
    invest->quantity=26; 
    invest->price=1373.19;

    /* output database */
    puts("Investment Portfolio"); 
    printf("Symbol\tShares\tPrice\tValue\n"); 
    printf("%-6s\t%5d\t%.2f\t%.2f\n",
        invest->symbol,
        invest->quantity,
        invest->price, invest->quantity*invest->price);
    
    free(invest);
    return(0);
}
