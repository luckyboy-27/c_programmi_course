#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct  node *link;

};

void count_nodes(struct node *head);

int main() {
    // First Node:
    struct node *head; // Create a pointer
    head = (struct node *)malloc(sizeof(struct node)); //Use malloc to allocate memory for the struct
    head->data = 45; //assign data
    head->link = NULL; //initially link is null
    
    // Second Node
    struct node *current;
    current = (struct node *)malloc(sizeof(struct node)); 
    current->data = 98;
    current->link = NULL;
    head->link = current; 

    // Third node
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; 

    count_nodes(head);

    free(head);
    free(current);
    putchar('\n');
    return 0;
}

void count_nodes(struct node *head) {
    int count = 0;
    if (head==NULL) {
        printf("List is empty");
    }
    struct node *ptr = NULL;
    ptr  = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    printf("%d ", count);
}