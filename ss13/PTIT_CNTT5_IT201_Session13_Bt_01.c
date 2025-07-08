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

int main() {
    Stack s;
    initStack(&s);
    push(&s, 4);
    push(&s, 6);
    push(&s, 8);
    push(&s, 10);
    push(&s, 12);
}