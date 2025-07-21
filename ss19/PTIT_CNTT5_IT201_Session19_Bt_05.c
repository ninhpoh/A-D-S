#include "./coment.h"

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;

//tao node moi
Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
}

// L - Root - R
int findOrder(Node *root,int n) {
    if (root == NULL) {
        return;
    }

    if (findOrder(root->left, n)) {
        return 1;
    }

    if (root->data == n) {
        return 1;
    }

    return findOrder(root->right, n);
}

//main
int main() {
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int n;
    printf("nhap mot so bat ki : ");
    scanf("%d",&n);
    findOrder(root,n);
    if (findOrder(root,n)) {
        printf("true\n");
    }else {
        printf("false\n");
    }
    return 0;
}
