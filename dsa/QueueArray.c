#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isfull(struct queue * q){
    if(q->r == q->size-1){
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

void enqueue(struct queue *q, int val){
    if(isfull(q)){
        printf("Queue is full");
    }else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q){
    int a;
    if(isEmpty(q)){
        printf("Queue is Empty");
    }else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 9);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printf("queue is dequeue %d\n", dequeue(&q));

    printf("queue is dequeue %d\n", dequeue(&q));

    printf("queue is dequeue %d\n", dequeue(&q));

    return 0;
} 