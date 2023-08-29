
#include<stdio.h>
#include<stdlib.h>

#define MAX 5
typedef struct stack{
 int data[MAX];
 int top;

}Stack;

void init(Stack *);
void push(Stack *,int);
int pop(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);

int main(){
  Stack s;
  int x,ch,num;
  init(&s);

  printf("Enter any decimal number:");
  scanf("%d",&num);

int temp=num;
while(temp>0){
    int r=temp%2;
    push(&s,r);
    temp=temp/2;
}
printf("Decimal Binary number is:",num);
while((x=pop(&s))!=-1){
  printf("%d",x);
}
  return 0;

}

void push(Stack *s,int x){
  if(isFull(s)){
    printf("Stack is Full");
  }
  else{
    s->top=s->top+1;
    s->data[s->top]=x;
    // printf("Push Success %d",s->data[s->top]);
  }

}

int pop(Stack *s){
int x=-1;
if(isEmpty(s)){
return x;
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
