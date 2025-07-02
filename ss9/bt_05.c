#include <stdio.h>
#include <stdlib.h>

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


void push(Node** headRef, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
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

    push(&head, 60);

    printf("sau khi them 60 vao dau danh sach:\n");
    printList(head);

    return 0;
}
