#include "./coment.h"
typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *createNewNode(int value) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* Adj[100];

Node *addAdj(int u,int v) {
    Node* newNodeV = createNewNode(u);
    newNodeV ->next = Adj[v];
    Adj[v]= newNodeV;

    Node* newNode = createNewNode(v);
    newNode->next = Adj[u];
    Adj[u]=newNode;
}

void printAdj(int n) {
    for (int i = 0; i < n; i++) {
        Node * AdjNode = Adj[i];
        printf("%d: ", i);
        while (AdjNode != NULL) {
            printf("%d -> ", AdjNode->data);
            AdjNode = AdjNode->next;
        }
        printf("NULL");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap kich thuoc ma tran:");
    scanf("%d", &n);
    addAdj(0,1);
    addAdj(0,2);
    addAdj(1,2);
    addAdj(3,2);
    addAdj(1,3);
    addAdj(3,4);
    printAdj(n);

    return 0;
}