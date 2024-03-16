#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack * ptr){
    if(ptr->top == -1)
        return 1;
    else
        return 0;
}

void push(struct stack * sp, int data){
    if(!isFull){
        sp->top++;
        sp->arr[sp->top]= data;
        printf("\ndata is saved on sp->arr[%d] => %d", sp->top, data);
    }else{
        printf("\nstack is full");
    }

}
void pop(struct stack * sp){
    if(!isEmpty){
        printf("\nit element is poped sp->arr[%d] => %d", sp->top, sp->arr[sp->top]);
        sp->top--;
    }else{
        printf("\n\nit stack is Empty");
    }
}


int main(){
    printf("\nRadhe Krishna");

    struct stack * sp = (struct stack* ) malloc(sizeof(struct stack));

    sp->top = -1;
    sp->size = 10;

    sp->arr = (int *) malloc(sp->size*sizeof(int));

    push(sp, 5);
    pop(sp);

}