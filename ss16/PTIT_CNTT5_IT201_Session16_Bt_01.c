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

int main() {
    Queue queue;
    initQueue(&queue);
    return 0;
}