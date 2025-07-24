#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNewNode(int value) {
    Node* newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("tran bo nho\n");
        return newNode;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addLast(Node** head, int value) {
    Node* newNode = createNewNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int countEdges(int matrix[100][100], int n) {
    int edgeCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] == 1 && matrix[j][i] == 1) {
                edgeCount++;
            }
        }
    }
    return edgeCount;
}

int main() {
    int n;
    do {
        printf("Enter number of vertices (0 < n < 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    int matrix[100][100];
    Node *adj[100] = {NULL};

    printf("Enter the adjacency matrix (%dx%d) with 0 or 1:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0 && matrix[i][j] != 1) {
                printf("Chi dc nhap 0 hoac 1.\n");
                j--;
            }
        }
    }

    int edgeCount = countEdges(matrix, n);
    printf("\nSo cach trong đoan: %d\n", edgeCount);

    return 0;
}