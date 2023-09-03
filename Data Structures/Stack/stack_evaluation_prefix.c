
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

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
int evaluate(int,int,char);


int main(){
  Stack s;
  int x,i,ans;
  char exp[10];
  init(&s);

  printf("Enter Prefix Expression:");
  scanf("%s",exp);

  for(i=strlen(exp)-1;i>=0;i--){
    if(exp[i]>='0' && exp[i]<='9')
    push(&s,exp[i]-48);
    else{
        int value1=pop(&s);
        int value2=pop(&s);
        int ans=evaluate(value1,value2,exp[i]);
        push(&s,ans);
    }
  }

  ans=pop(&s);
  printf("%s is prefix and evaluation is %d",exp,ans);

  return 0;

}

void push(Stack *s,int x){
  if(isFull(s)){
    printf("Stack is Full");
  }
  else{
    s->top=s->top+1;
    s->data[s->top]=x;
    printf("Push Success %d \n",s->data[s->top]);
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
int evaluate(int value1,int value2,char op){
    if(op=='+')
    return value1+value2;

    if(op=='-')
    return value1-value2;

    if(op=='*')
    return value1*value2;

    if(op=='/')
    return value1/value2;

    if(op=='%')
    return value1%value2;

    if(op=='^')
    return pow(value1,value2);
}
