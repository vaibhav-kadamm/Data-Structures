
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
typedef struct stack{
 int data[MAX];
 int top;

}Stack;

void init(Stack *);
void push(Stack *,char);
int pop(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);
int getTop(Stack *s);

int main(){
  Stack s1;
  Stack s2;
  char string[10];
  init(&s1);
  init(&s2);

printf("Enter any String:");
scanf("%s",string);


    int count=0,i;
    for(i=0;string[i]!='\0';i++)
        push(&s1,string[i]);

    for(i=strlen(string)-1;i>=0;i--)
        push(&s2,string[i]);

    
    while ( !isEmpty(&s1) && !isEmpty(&s2) && getTop(&s1) == getTop(&s2))
    {
        pop(&s1);
        pop(&s2);
    }

    if(isEmpty(&s1) && isEmpty(&s2))
        printf("\n%s is Palindrome String!!!",string);
    else
        printf("\n%s is Not Palindrome String!!!",string);
    return 0;
}


void push(Stack *s,char x){
  if(isFull(s)){
    printf("Stack is Full");
  }
  else{
    s->top=s->top+1;
    s->data[s->top]=x;
    printf("Push Success %c \n",s->data[s->top]);
  }

}

int pop(Stack *s){
int x=-1;
if(isEmpty(s)){
   printf("Stack is Empty");
}
else{
      x=s->data[s->top];
      s->top=s->top-1;
}
return x;
}

int isFull(Stack *s){

    if(s->top==MAX-1)
        return 1;
    
    return 0;
}
int isEmpty(Stack *s){

    if(s->top==-1)
     return 1;
    
    return 0;

}
void init(Stack *s){

 s->top=-1;

}
int getTop(Stack *s)
{
    return s->data[s->top];
}
