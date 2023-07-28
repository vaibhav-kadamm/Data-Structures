#include<stdio.h>
#include<string.h>
#define SIZE 40
int main(){
    char s[SIZE]="vaibhavkadam@gmail.com";
    // printf("%s\n",s);
    // printf("%s",s+5);
   
   char *ptr;
   int ch='@';

   ptr=strchr(s,ch);
   //printf("Occur of %c is '%s' is '%s' ",ch,s,ptr+1);
   if(strcmp("gmail.com",ptr+1)==0){
    printf("\ngmail is found");
   }
   else{
    printf("Not Found");
   }

}