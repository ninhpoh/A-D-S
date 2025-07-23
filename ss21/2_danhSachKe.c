/**
 * nhuoc diem cua ma tran ke:
 *  - ton bo nho
 *  - kho mo rong
 */

// DANH SACH KE
#include "./coment.h"
// y tuong la moi dinh se la mot danh sach lien ket voi cac dinh khac

// tao cau truc 1 node
typedef struct Node {
    int data;
    struct Node *next;
}Node;
Node *head = NULL;

//viet ham tao node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//tao mang chua danh sach cac con tro den tung dinh
Node* Adj[4];

//viet ham tao lien ket
Node *addAdj(int u,int v) {
    // tao node moi them vao dau
    Node* newNode = createNode(u);    // di lien ket voi phan tu ban dau
    newNode->next = Adj[u];
    Adj[u]=newNode;          // newNode luc nay se la phan tu dau

    newNode = createNode(v);
    newNode ->next = Adj[v];      // lien ket voi phan tu ban dau
    Adj[v]= newNode;            //newNode h se la phan tu dau tien
}

//in
void print() {
    for (int i = 0; i < 4; i++) {
        Node *temp = Adj[i];
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    //khoi tao cac gia tri ve null
    for (int i = 0; i < 4; i++) {
        Adj[i] = NULL;
    }
    addAdj(0, 1);
    addAdj(1, 2);
    addAdj(2, 3);
    print();
    return 0;
}
