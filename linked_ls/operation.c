#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *link;

};

typedef struct list node;

int count_nodes(node *head);
int search(node *head, int value);
node *create(int value);
node *insert_head(node *head, int value);
node *insert_tail(node *head, int value);
node *insert(node *head, int value, int position);
void remove_head(node *head);
void remove_tail(node * tail);
void remove_position(node *head, int position);
void remove_value(node *head, int value);

int main() {
    // First Node:
    node *head; // Create a pointer
    head = (node *)malloc(sizeof(struct list)); //Use malloc to allocate memory for the struct
    head->data = 45; //assign data
    head->link = NULL; //initially link is null
    
    // Second Node
    node *current;
    current = (node *)malloc(sizeof(struct list)); 
    current->data = 98;
    current->link = NULL;
    head->link = current; 

    // Third node
    current = (node *)malloc(sizeof(struct list));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; 

    //printf("New head is %d\n", insert_head(head, 31)->data);
    //printf("New tail is %d\n", insert_tail(head, 27)->data);
    printf("new node at position 2 is %d\n", insert(head, 21, 2)->data);
    printf("%d\n", count_nodes(head));
    //printf("%d\n", search(head, 27));

    free(head);
    free(current);
    putchar('\n');
    return 0;
}

int count_nodes(node *head) {
    int count = 0;
    if (head==NULL) {
        printf("List is empty");
    }
    node *ptr = NULL;
    ptr  = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    return count;
}

int search(node *head, int value) {
    node *p;
    int position = 0;
    for(p = head; p != NULL; p = p->link){
        if(p->data == value){
            return position;
        }
        ++position;
    }
    printf("Not found! ");
    return 404; // for fun only xD
}

node *create(int value) {
    node *new;
    new = (node *)malloc(sizeof(struct list));
    new->data = value;
    new->link = NULL;
    free(new);
    return new;
}


node *insert_head(node *head, int value) {
    node *new = create(value);
    if (head==NULL) {
        head = new;
    }
    else {
        new->link = head;
        head = new;
    }
    return head;
}
node *insert_tail(node *head, int value) {
    node *ptr = head;
    node *new = create(value);
    if (head==NULL) {
        head = new;
    }
    else {
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = new;
    }
    return new;
}

node *insert(node *head, int value, int position) {
    int i = 1;
    node *ptr = head;
    node *new = create(value);
    if(position == 0 || head == NULL) { 
        head = insert_head(head, value);
    }
    else {
        while (ptr != NULL && i != position) {
            ptr = ptr->link;
            ++i;
        }

        if (i != position) {
            head = insert_tail(head, value); // if the position is bigger than the size of the struct we can automatically assign it to the last postion
        } 
        else {
            new->link = ptr->link;
            ptr->link = new;
        }
    }
    return new;
}