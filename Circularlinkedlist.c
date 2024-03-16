#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

// LinkedList traversal
void LinkedListtraversal(struct Node * head){
    struct Node * ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next; 
    }while(ptr != head);
}




struct Node * insertAtFirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node ));
    ptr->data = data;
    struct Node * p = head->next;

    while(p->next!=head){
        p = p->next ;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;

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
    four->next = head;

    LinkedListtraversal(head);
    insertAtFirst(head, 9);
    printf("\n");
    LinkedListtraversal(head);
    return 0;
    
}