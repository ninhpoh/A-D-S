#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int findValue(Node* root, int value) {
    if (root == NULL) return 0;

    Node* queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];

        if (current->data == value) {
            return 1;
        }

        if (current->left != NULL) {
            queue[rear++] = current->left;
        }
        if (current->right != NULL) {
            queue[rear++] = current->right;
        }
    }
    return 0;
}

int main() {
    Node* root = createNode(1);
    Node* left1 = createNode(2);
    Node* right1 = createNode(3);
    Node* left2 = createNode(4);
    Node* right2 = createNode(5);

    root->left = left1;
    root->right = right1;
    left1->left = left2;
    right1->right = right2;

    int valueToFind;
    printf("Nhap so muon tim: ");
    scanf("%d", &valueToFind);
    if (findValue(root, valueToFind)) {
        printf("So %d co ton tai trong tree.\n", valueToFind);
    } else {
        printf("So %d ko ton tai trong tree.\n", valueToFind);
    }

    return 0;
}