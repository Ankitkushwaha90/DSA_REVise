#include <stdio.h>
#include <stdlib.h>

struct queue{
    int f;
    int r;
    int size;
    int * arr;
};

int isFull(struct queue * q){
    if(q->f == q->size -1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct queue * q){
    if(q->size == -1){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct queue * q, int data){
    if(!isFull(q)){
        q->r++;
        q->arr[q->r]= data;
        printf("\nenqueue is enqueue q->arr[%d] => %d ", q->r, q->arr[q->r]);
        
    }else{
        printf("\nqueue is full");
    }
}

void dequeue(struct queue * q){
    if(!isEmpty(q)){
        q->r--;
        printf("\nit's element is poped %d => q->arr[%d]",q->arr[q->r], q->r );
    }else{
        printf("\nqueue is Empty");
    }
}

int main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size *sizeof(int));
    
    enqueue(&q, 5);
    dequeue(&q);
}