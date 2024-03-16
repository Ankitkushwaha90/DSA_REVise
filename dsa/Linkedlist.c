#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

// traversal
void traversal(struct Node * ptr){
    while(ptr != NULL){
        printf("%d", ptr->data);
        ptr = ptr->next; 
        printf("\n\n");
    }
}


int main(){
    struct Node * head;
    struct Node * two;
    struct Node * three;
    struct Node * four;

    head = (struct Node *) malloc(sizeof(struct Node));
    two = (struct Node *) malloc(sizeof(struct Node));
    three = (struct Node *) malloc(sizeof(struct Node));
    four = (struct Node *) malloc(sizeof(struct Node));

    head->data = 1;
    head->next = two;
    
    two->data = 3;
    two->next = three;

    three->data = 8;
    three->next=four;

    four->data=12;
    four->next = NULL;

    traversal(head);
    return 0;
    
}