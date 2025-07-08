//
// Created by PC on 08/07/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

struct Stack {
    char arr[MAX];
    int top;
};

void initialize(struct Stack* s) {
    s->top = -1;
}

bool isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

bool isEmpty(struct Stack* s) {
    return s->top == -1;
}

void push(struct Stack* s, char value) {
    if (!isFull(s)) {
        s->arr[++(s->top)] = value;
    }
}

char pop(struct Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return '\0';
}

bool isPalindrome(char* str) {
    struct Stack s;
    initialize(&s);
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        push(&s, str[i]);
    }

    int start = (len % 2 == 0) ? len / 2 : len / 2 + 1;

    for (int i = start; i < len; i++) {
        if (pop(&s) != str[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0;

    printf("%s\n", isPalindrome(str) ? "true" : "false");
    return 0;
}