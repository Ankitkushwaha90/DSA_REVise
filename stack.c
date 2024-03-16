#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack * ptr){
    if(ptr->top == ptr -> size -1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack * ptr){
    if(ptr -> top ==  -1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack * sp, int data){
    if(isFull(sp)){
        printf("stack is fully");
    }else{
        sp->top++;
        sp->arr[sp->top]=data;
        printf("pushed data is %d\n",sp->arr[sp->top]);
    }
}

void pop(struct stack * sp){
    if(isEmpty(sp)){
        printf("stack is Empty");
    }else{
        printf("poped element is %d", sp->arr[sp->top]);
        sp->top--;
        
    }
}

int main(){
    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    
    sp-> arr = (int *) malloc(sp->size*sizeof(int));
    printf("Stack has been created successfull \n");

    push(sp, 5);
    pop(sp);


    return 0;
    
}