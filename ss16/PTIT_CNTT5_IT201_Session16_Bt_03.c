
#include <stdio.h> // Include for printf
#include "./coment.h" // Assuming this is a valid header file

#include <stdio.h>
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

int isEmpty(Queue* queue) {
    return queue->rear < queue->front;
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

int getFront(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->arr[queue->front];
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
    int frontElement = getFront(&queue);
    if (frontElement != -1) {
        printf("phan tu dau tien: %d\n", frontElement);
    }

    return 0;
}