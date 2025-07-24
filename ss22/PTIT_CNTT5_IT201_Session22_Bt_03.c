#include "./coment.h"
typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *createNewNode(int value) {
    Node* newNode = malloc(sizeof(Node));
    if (newNode==NULL) {
        printf("Memory allocation failed in function createNewNode()\n");
        return newNode;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addLast(Node**head,int value) {
    Node* newNode = createNewNode(value);
    if (*head==NULL) {
        *head = newNode;
    }else {
        Node* temp = *head;
        while (temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

}

void convertMatrix(int matrix[100][100],int n,Node*adj[]) {
    for(int i=0;i<n;i++) {
        adj[i]=NULL;
        for(int j=0;j<n;j++) {
            if(matrix[i][j]==1) {
                addLast(&adj[i],j);
            }
        }
    }
}

void printMatrix(Node*adj[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d: ",i);
        Node* temp = adj[i];
        while(temp!=NULL) {
            printf("%d ->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int n;
    do {
        printf("Enter number of vertices (0 < n < 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    int matrix[100][100];
    Node *adj[100] = {NULL};

    printf("Enter the adjacency matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    convertMatrix(matrix, n, adj);
    printf("\nAdjacency List:\n");
    printMatrix(adj, n);
    return 0;
}
