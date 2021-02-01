#include <stdio.h>
#include <stdlib.h>

//initialize a struct node --> initialize first elements of the list so we can access all element in the range of the list
// only 1 link is allowed in node, which is a pointer
// at the end of the link ls, the link is assign to "NULL"
// use malloc to create memory for struct node, because creating a struct is not sufficient
//--> to create a node for a linked ls --> create a struct node with 2 elements: 1. data, 2. links (a pointer)
// task--> create 3 node
struct node {
    int data;
    struct  node *link;

};

int main() {
    // FIRST POINTER must contain null
    //initalize the first element "head"
    // initialize data access to the node data
    // to create a secode node, we have to call malloc function to allocate memory
    // one pointer only pointing to a single node

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
    head->link = current; // important: use it to link the head node with the current node 
    //--> link of head (1st node) will contain the address of the second node (current)

    //Third Node
    struct node *ongoing;
    ongoing = (struct node *)malloc(sizeof(struct node));
    ongoing->data = 200;
    ongoing->link = NUll;
    current->link = ongoing;

    //--> this method is not effective because 20 node --> 20 pointers, 20 malloc, and so on 
    // head-> link = ADDRESS of current->data
    // head -> link -> link = ADDRESS of ongoing->data
    // head -> link -> link -> link = NULL
    free(head);
    free(current);
    putchar('\n');
    return 0;
}
