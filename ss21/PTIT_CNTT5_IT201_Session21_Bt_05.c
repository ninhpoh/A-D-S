#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the adjacency list
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *head = NULL;

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Array to hold adjacency lists for each vertex
Node* Adj[3];

// Function to add a directed edge from v to u
Node* addAdj(int v, int u) {
    Node* newNode = createNode(u);
    newNode->next = Adj[v];
    Adj[v] = newNode;
}

// Function to print the adjacency lists
void print() {
    for (int i = 0; i < 3; i++) {
        Node *temp = Adj[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    printf("]\n");
}

int main() {
    for (int i = 0; i < 3; i++) {
        Adj[i] = NULL;
    }
    addAdj(1, 2); // Add edge 1 -> 2
    addAdj(2, 1); // Add edge 2 -> 1
    printf("[\n");
    print();
    addAdj(0, 1); // Add edge 0 -> 1
    addAdj(1, 0); // Add edge 1 -> 0
    printf("[\n");
    print();
    return 0;
}