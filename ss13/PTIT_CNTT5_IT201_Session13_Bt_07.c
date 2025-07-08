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

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '[' && closing == ']') ||
           (opening == '{' && closing == '}');
}

bool isBalanced(char* exp) {
    struct Stack s;
    initialize(&s);

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(&s, exp[i]);
        } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (isEmpty(&s) || !isMatchingPair(pop(&s), exp[i])) {
                return false;
            }
        }
    }
    return isEmpty(&s);
}

int main() {
    char exp[MAX];
    printf("Nhap bieu thuc: ");
    fgets(exp, MAX, stdin);
    exp[strcspn(exp, "\n")] = 0;

    printf("\"%s\" -> %s\n", exp, isBalanced(exp) ? "true" : "false");
    return 0;
}