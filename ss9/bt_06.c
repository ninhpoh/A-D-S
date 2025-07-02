//
// Created by PC on 02/07/2025.
//
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

void deleteHead(Node** headRef) {
    if (*headRef == NULL) {
        printf("Danh sách rỗng, không thể xoá.\n");
        return;
    }

    Node* temp = *headRef;
    *headRef = (*headRef)->next;
    free(temp);
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

    printf("truoc khi xoa:\n");
    printList(head);

    deleteHead(&head);

    printf("sau khi xoa phan tu dau danh sach:\n");
    printList(head);

    return 0;
}
