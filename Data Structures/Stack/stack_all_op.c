
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
  int x,ch;
  init(&s);

while (1)
{
        printf("\n========================\n");
        printf("\n1: Push");
        printf("\n2: Pop");
        printf("\n3: Empty");
        printf("\n4: Full");
        printf("\n5: Exit");
        printf("\n========================\n");

        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

switch (ch)
{
   case 1:
   printf("Enter the data:");
   scanf("%d",&x);
   push(&s,x);
   break;
    
   case 2:
   x=pop(&s);
   if(x!=-1){
    printf("%d is Popped \n",x);
   }
   else{
    printf("Empty Stack \n");
   }
   break;

   case 3:
   if(isEmpty){
       printf("Empty Stack");
   }
   else{
    printf("Stack is not Empty");
   }
   break;

   case 4:
   if(isFull(&s)){
    printf("Stack is Full");
   }
   else{
    printf("Stack is not full");
   }
   break;

   case 5:
   exit(0);
}


}

}

void push(Stack *s,int x){
  if(isFull(s)){
    printf("Stack is Full");
  }
  else{
    s->top=s->top+1;
    s->data[s->top]=x;
    printf("Push Success %d",s->data[s->top]);
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
