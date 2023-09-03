#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct stack {
    int data[MAX];
    int top;
} Stack;

void init(Stack *);
void push(Stack *, int);
int pop(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);
int getTop(Stack *s);
int getPriority(char op);

int main() {
    Stack s;
    int x, num;
    char infix[100];
    char postfix[100];
    init(&s);
    int i, j = 0;
    char token, temp; 

    printf("Enter any Infix Expression:");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++) {
        token = infix[i];

        if (isalnum(token)) {
            postfix[j++] = token;
        } else {
            if (token == '(') {
                push(&s, token);
            } else if (token == ')') {
                while ((temp = pop(&s)) != '(') { 
                    postfix[j++] = temp;
                }
            } else {
                while (!isEmpty(&s) && getPriority(getTop(&s)) >= getPriority(token)) {
                    temp = pop(&s);
                    postfix[j++] = temp;
                }
                push(&s, token);
            }
        }
    }
    while (!isEmpty(&s)) {
        temp = pop(&s);
        postfix[j++] = temp;
    }
    postfix[j++] = '\0';
    printf("\nInfix Expression is %s", infix);
    printf("\nPostfix Expression is %s", postfix);

    return 0;
}

void push(Stack *s, int x) {
    if (isFull(s)) {
        printf("Stack is Full");
    } else {
        s->top = s->top + 1;
        s->data[s->top] = x;
        printf("Push Success %d \n", s->data[s->top]);
    }
}

int pop(Stack *s) {
    int x = -1;
    if (isEmpty(s)) {
        printf("Stack is Empty");
    } else {
        x = s->data[s->top];
        s->top = s->top - 1;
    }
    return x;
}

int isFull(Stack *s) {
    if (s->top == MAX - 1)
        return 1;
    return 0;
}

int isEmpty(Stack *s) {
    if (s->top == -1)
        return 1;
    return 0;
}

void init(Stack *s) {
    s->top = -1;
}

int getTop(Stack *s) {
    return s->data[s->top];
}

int getPriority(char op) {
    if (op == '(')
        return 0;
    else if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/' || op == '%')
        return 2;
    return 3; 
}
