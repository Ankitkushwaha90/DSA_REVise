#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isfull(struct circularQueue * q){
    if((q->r+1)%(q->size)==q->f){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct circularQueue * q){
    if(q->r == q->f){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct circularQueue *q, int val){
    if(isfull(q)){
        printf("Queue is full");
    }else{
        q->r = (q->r+1)%(q->size);
        q->arr[q->r]=val;
        printf("Enqueued element is %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int val = -1;
    if(isEmpty(q)){
        printf("Queue is Empty");
    }else{
        q->f = (q->f+1)%(q->size);
        val=q->arr[q->f];
    }
    return val;
}

int main(){
    struct circularQueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *) malloc(q.size*sizeof(int));


    enqueue(&q, 9);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 1);
    enqueue(&q, 30);

    printf("queue is dequeue %d\n", dequeue(&q));

    printf("queue is dequeue %d\n", dequeue(&q));

    
    printf("queue is dequeue %d\n", dequeue(&q));

    printf("queue is dequeue %d\n", dequeue(&q));

    printf("queue is dequeue %d\n", dequeue(&q));

    return 0;
} 