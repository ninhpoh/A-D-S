#include "./coment.h"

// cau truc 1 node trong cay

// typedef struct Data {
//     int id;
//     char name[50];
//     int age;
// }Data;

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

// trien khai dfs theo nhieu cach
// L - Root - R
void inOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// L - R - Root
void postOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

// Root - L- R
void preOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

//main
int main() {
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder Traversal:\n");
    inOrder(root);
    printf("\n");
    printf("Postorder Traversal:\n");
    postOrder(root);
    printf("\n");
    printf("Preorder Traversal:\n");
    preOrder(root);

    return 0;
}
/*
 *          CHU YEU DE PHAN CAP DU LIEU
 *
 *                   1  (Goc)
 *                 /   \
 *                2     3   (Lop canh)
 *                     /  \
 *                    5    6  (Lop la)
 *
 *      Duyet chieu sau
 *          *pre: Root - L - R
 *          *in: L - Root - R
 *          *post: L - R - Root
 *
 *      Duyet chieu rong
*/