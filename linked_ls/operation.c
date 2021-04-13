#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *link;

};

typedef struct list node;

int count_nodes(node *head);
int search(node *head, int value);
int Get(node *head, int position);
node *create(int value);
node *insert_head(node *head, int value);
node *insert_tail(node *head, int value);
node *insert(node *head, int value, int position);
node *remove_head(node *head);
node *remove_tail(node *head);
node *remove_position(node *head, int position);
node *remove_value(node *head, int value);

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

    //testing

    //printf("New head is %d\n", insert_head(head, 31)->data);
    //printf("New tail is %d\n", insert_tail(head, 27)->data);
    //printf("first node is %d\n", head->data);
    //printf("after: %d\n", remove_head(head)->data);
    //printf("%d\n", remove_tail(head)->data);
    //printf("after removing, count data change --> lost the tail node\n");
    //printf("%d\n", GetValue(head, 5)); //input the position not the value
    //printf("%d\n", remove_position(head, 0)->data);  // will lose 45 because i remove first position
    //printf("after removing, count data change --> lost the node whose position we input\n");
    //printf("after removing, count data change --> lost the node whose value we input\n");
    //printf("%d\n", remove_value(head, 45)->data); // will return 98, because 45 is the first value
    //printf("%d\n", count_nodes(head));
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
    printf("Not Found! ");
    return -1; // for fun only xD
}

int GetValue(node *head, int position) {
    int x = 0;
    node *ptr = head;
    if (position <= count_nodes(head)) {
        while (ptr->link != NULL && x != position) {
            ++x;
            ptr = ptr->link;
        }
        return ptr->data;
    }
    else {
        printf("position not valid\n");
        return -1;
    }
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
            head = insert_tail(head, value); 
            // if the position is bigger than the size of the struct we can automatically assign it to the last postion
        } 
        else {
            new->link = ptr->link;
            ptr->link = new;
        }
    }
    return new;
}

node *remove_head(node *head) {
    if (head==NULL) {
        printf("nothing to delete\n");
    }
    else {
        head = head->link;
    }
    return head;
}

node *remove_tail(node *head) {
    node *ptr = head;
    if (head == NULL|| head->link == NULL) {
        return remove_head(head);
    }
    while (ptr->link->link != NULL) {
        ptr= ptr->link;
    }
    ptr->link = ptr->link->link;
    return head;
}

node *remove_position(node *head, int position) {
    node *ptr = head;
    int x = 1;
    if(position == 0 || head == NULL || head->link == NULL) {
        head = remove_head(head);
    }
    
    while (ptr->link->link != NULL && x != position) {
        ptr = ptr->link;
        ++x;
    }
    if (x != position) {
        head = remove_tail(head);
    } else {
        ptr->link = ptr->link->link;
    }
    return head;
}

node *remove_value(node *head, int value) {
    int position = search(head, value);
    return remove_position(head, position);
}