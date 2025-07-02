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


void printList(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


void insertAtPosition(Node **headRef, int value, int position) {
    Node *newNode = createNode(value);


    if (position == 0) {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }

    Node *current = *headRef;
    int i = 0;


    while (current != NULL && i < position - 1) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Vị trí không hợp lệ!\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

int main(void) {

    Node *one = createNode(10);
    Node *two = createNode(20);
    Node *three = createNode(30);
    Node *four = createNode(40);
    Node *five = createNode(50);

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node *head = one;

    printf("Danh sach ban dau:\n");
    printList(head);

    int value, position;
    printf("nhap gia tri: ");
    scanf("%d", &value);
    printf("Nhap vi tri: ");
    scanf("%d", &position);

    insertAtPosition(&head, value, position);

    printf("danh sach sau khi tren\n");
    printList(head);

    return 0;
}
