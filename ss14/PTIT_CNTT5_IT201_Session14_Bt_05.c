//
// Created by PC on 09/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->top->data;
}

void display(struct Stack* stack) {
    struct Node* temp = stack->top;
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("ngan xep: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = createStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    push(stack, 6);
    display(stack);
    printf("phan tu o dau: %d\n", peek(stack));
    return 0;
}