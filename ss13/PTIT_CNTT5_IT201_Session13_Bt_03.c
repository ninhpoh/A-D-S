//
// Created by PC on 08/07/2025.
//

#include <stdio.h>
#define MAX 100
 // KHAI BÁO CẤU TRÚC NGAN XẾP VỚI MẢNG
typedef  struct {
    int data[MAX];
    int top;
} Stack ;

// KHỞI TẠO NGĂN XẾP
void initStack(Stack* s) {
    s->top = -1;
}
// TẠO HÀM KIỂM TRA XEM NGĂN XẾP ĐÃ ĐẦY HAY CHƯA
int isFull(Stack* s) {
    return s->top == MAX - 1;
}
// HÀM KIỂM TRA NGĂN XẾP CÓ RỖNG HAY KHÔNG
int isEmpty(Stack* s) {
    return s->top == -1;
}

// THÊM PHẦN TỬ VÀO TRONG NGAN XẾP
void push(Stack* s, int x) {
    if (isFull(s)) {
        printf("Stack is full\n");
    }else {
        s->data[++s->top]=x;
    }
}


// HIỂN THỊ PHẦN TỬ ĐỈNH CỦA NGĂN XẾP
int top(Stack* s) {
    if (isEmpty(s)) {
        printf("No element in stack\n");
        return -1;
    }
    return s->data[s->top];
}

// HIỂN THỊ PHẦN TỬ TRONG NGĂN XẾP
void printStack(Stack* s) {

    if (isEmpty(s)) {
        printf("Stack is empty\n");
    }else {

        for (int i=s->top; i>=0; i--) {
            printf("%d", s->data[i]);
        }
    }
}
int main() {
    Stack s;
    initStack(&s);
    push(&s, 4);
    push(&s, 6);
    push(&s, 8);
    push(&s, 10);
    push(&s, 12);
    printf("phan tu tren dinh: %d\n", top(&s));
}