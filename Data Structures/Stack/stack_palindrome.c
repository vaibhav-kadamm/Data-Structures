
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 100
typedef struct stack{
 int data[MAX];
 int top;

}Stack;

void init(Stack *);
void push(Stack *,int);
int pop(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);
int getTop(Stack *s);

int main(){
  Stack s1;
  Stack s2;
  int x,num;
  init(&s1);
  init(&s2);

printf("Enter any number:");
scanf("%d",&num);

int temp=num;
    int count=0;
    while(temp>0)
    {
        int r=temp%10;
        push(&s1,r);
        temp/=10;
        count++;
    }
    temp=num;
    while(count--)
    {
        int p = pow(10,count);
        int r = temp % p;
        int value = temp/p;
        push(&s2,value);
        temp = r;
    }
    while ( !isEmpty(&s1) && !isEmpty(&s2) && getTop(&s1) == getTop(&s2))
    {
        pop(&s1);
        pop(&s2);
    }

    if(isEmpty(&s1) && isEmpty(&s2))
        printf("\n%d is Palindrome Number!!!",num);
    else
        printf("\n%d is Not Palindrome Number!!!",num);
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
