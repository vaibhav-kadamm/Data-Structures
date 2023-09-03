#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 20
char stack[MAX][MAX];

int top=-1;
int main(){
    
char prefix[100];
char infix[100];

printf("Enter the prefix:");
scanf("%s",&prefix);

int i;
char s1[20];

for(i=strlen(prefix)-1;i>=0;i--){
    char token=prefix[i];
    if(isalnum(token)){
        s1[0]=token;
        s1[1]='\0';
        top+=1;
        strcpy(stack[top],s1);
    }
    else{
        strcpy(s1,"");
        strcpy(s1,stack[top]);
        char s2[20];
        s2[0]=token;
        s2[1]='\0';
        strcat(s1,s2);
        strcat(s1,stack[top-1]);
        top=top-1;
        strcpy(stack[top],s1);
    }
}

strcpy(infix,stack[top]);

    printf("prefix is %s\n",prefix);
    printf("Infix is %s\n",infix);

    return 0;
}

