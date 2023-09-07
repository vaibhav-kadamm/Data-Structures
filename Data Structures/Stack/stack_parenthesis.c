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

char Stack1[MAX][MAX];
int top1=-1;


void init(Stack *);
void push(Stack *, int);
int pop(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);
int getTop(Stack *s);
int getPriority(char op);
void parenthesize(char infix[],char final[]);


void main()
{
	char infix[30],final[30];
	printf("\nEnter An Infix Expression : ");
	gets(infix);
	parenthesize(infix,final);
	printf("\nResult : %s",final);
	
}

void parenthesize(char infix[],char final[])
{
    char token;
    char st1[50],st2[10];
    Stack s1;
    init(&s1);

    for(int i=0;infix[i]!='\0';i++)
    {
        token=infix[i];
		if(isalnum(token))
        {
            st1[0]=token;
            st1[1]='\0';
            top1+=1;
            strcpy(Stack1[top1],st1);
        }
        else
        {
            if(isEmpty(&s1))
                push(&s1,token);
            else
            {
                st1[0]='(';
                st1[1]='\0';
                strcat(st1,Stack1[top1-1]);
                st2[0]=pop(&s1);
                st2[1]='\0';
                strcat(st1,st2);
                strcat(st1,Stack1[top1]);
                st2[0]=')';
                st2[1]='\0';
                strcat(st1,st2);
                top1=top1-1;
                strcpy(Stack1[top1],st1);
                push(&s1,token);
            }
        }

    }
    st1[0]='(';
    st1[1]='\0';
    strcat(st1,Stack1[top1-1]);
    st2[0]=pop(&s1);
    st2[1]='\0';
    strcat(st1,st2);
    strcat(st1,Stack1[top1]);
    st2[0]=')';
    st2[1]='\0';
    strcat(st1,st2);
    top1=top1-1;
    strcpy(Stack1[top1],st1);
    strcpy(final,Stack1[top1]);

    
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
