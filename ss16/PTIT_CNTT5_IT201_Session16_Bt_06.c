
#include "./coment.h"

#define MAX 100

typedef struct Queue {
    int arr[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue* queue) {
    queue->front = 0;
    queue->rear = -1;
}

int isFull(Queue* queue) {
    return queue->rear == MAX - 1;
}

void enQueue(Queue* queue, int newValue) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    queue->arr[++queue->rear] = newValue;
}
void printfQueue(Queue* queue) {
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->arr[i]);
    }
}
int main() {
    Queue queue;
    initQueue(&queue);
    enQueue(&queue, 1);
    enQueue(&queue, 2);
    enQueue(&queue, 3);
    enQueue(&queue, 4);
    enQueue(&queue, 5);
    printfQueue(&queue);
    printf("\n");

  
    return 0;
}