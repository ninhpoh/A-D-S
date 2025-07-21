#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void addNode(Node *root, int value) {
    if (root == NULL) return;
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        root->left->left = createNode(value);
    }
    else if (root->right != NULL && root->right->left == NULL && root->right->right == NULL) {
        root->right->left = createNode(value);
    }
}

void preOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    Node *root = createNode(2);
    Node *left1 = createNode(3);
    Node *right1 = createNode(4);
    Node *left2 = createNode(5);

    root->left = left1;
    root->right = right1;
    left1->left = left2;

    int n;
    printf("Nhap so muon them: ");
    scanf("%d", &n);
    getchar();

    addNode(root, n);
    printf("Thu tu pre-order: ");
    preOrder(root);
    printf("\n");

    return 0;
}