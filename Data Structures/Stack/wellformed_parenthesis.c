#include<stdio.h>
#include<ctype.h>
#include<string.h>	
#include<stdlib.h>

#define MAX 50

typedef struct stack
{
	char data[MAX];
	int top;
}stack;


void init(stack*);
int full(stack*);
int isEmpty(stack*);
void push(stack*,char);
char pop(stack*);

void main()
{
	char x;
	stack s;
	init(&s);
	printf("\nEnter an parenthesized expression:");
	while((x=getchar())!='\n')
	{
		switch(x)
		{
			case '('	:
					push(&s,'(');
					break;
			case ')'	:
					if(!isEmpty(&s))
						pop(&s);
					else
						{
							printf("\nMismatch...");
							exit(0);
						}
					break;
                    
					default:
						break;


		}
	}
	if(!isEmpty(&s))
		printf("\nMismatch");
	else
		printf("\nWell Formed");
}

void init(stack *s)
{
	s->top=-1;
}
int full(stack *s)
{
    if(s->top==MAX-1)
        return 1;
    return 0;
}
int isEmpty(stack *s)
{
    if(s->top==-1)
        return 1;
    return 0;
}
void push(stack *s,char x)
{
        s->top=s->top+1;
        s->data[s->top]=x;
}

char pop(stack *s)
{
    char x;
    x=s->data[s->top];
    s->top=s->top-1;
    return x;
}
