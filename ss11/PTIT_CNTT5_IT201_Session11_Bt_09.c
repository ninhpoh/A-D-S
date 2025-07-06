//
// Created by PC on 06/07/2025.
//
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;


Node *insertAtHead(Node* head, int value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    return newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

void reverse(Node* head) {
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL \n");
}

int main() {
    Node* head = NULL;
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 3);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 1);

    printf("truoc dao nguoc:\n");
    printList(head);
    printf("sau dao nguoc:\n");
    reverse(head);

    return 0;
}
