//
// Created by PC on 03/07/2025.
//
#include "./coment.h"

typedef struct Node {
    int data;
    struct Node *next;
} Node;


Node *createNode(int data) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void append(Node** headRef, int newData) {
    Node* newNode = createNode(newData);

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main(void) {
    Node* one = createNode(10);
    Node* two = createNode(20);
    Node* three = createNode(30);
    Node* four = createNode(40);
    Node* five = createNode(50);


    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node* head = one;

    printf("truoc khi them:\n");
    printList(head);

    append(&head, 60);

    printf("sau khi them 60 vao cuoi danh sach:\n");
    printList(head);

    return 0;
}