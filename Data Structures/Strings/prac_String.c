#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define SIZE 40

//int string_to_int(char[]);

int main(){

    // char str[]="Vaibhav is a good. boyyy.";
    // char ch[]=".";
    // char rep[]="!";
    // char *token=strtok(str,ch);
    // char output[200];
    // strcpy(output,"");

    // while(token!=NULL){
    //     strcat(output,token);
    //     strcat(output,rep);
    //     token=strtok(NULL,ch);
    // }
    // printf("%s\n",output);
    // return 0;


    //  char str[]="Vaibhav is good.boyy.";
    //  char ch[]=".";
    //  char rep[]="!";
    //  char *token=strtok(str,ch);
    //  char output[200];
    //  strcpy(output,"");

    //  while(token!=NULL){
    //     strcat(output,token);
    //     strcat(output,rep);
    //     token=strtok(NULL,ch);

    //  }
    //  printf("%s",output);


// char str[]="Vaibhav is   good  boy  !";
// char output[100];

// int i,j=0;
// for(i=0;str[i]!='\0';i++){
//     if(str[i]==' ' && str[i+1]==' ');
//     else
//         output[j++]=str[i];
    
// }
//    output[j]='\0';
//     printf("%s",output);
 
//  return 0;


// char str[]="Vaibhav I    Love   you!";
// char output[200];

// int i,j=0;
// for(i=0;str[i]!='\0';i++){

//     if(str[i]==' ' && str[i+1]==' ');
//     else
//        output[j++]=str[i];

// }
// output[j]='\0';
// printf("%s\n",str);
// printf("%s",output);

// char str[]="vaibhav";
// char rev[200];
// strcpy(rev,str);
// strrev(rev);
// printf("%s",rev);

// int i,cnt=0;
// for(i=0;str[i]!='\0';i++){
//     if(str[i]==rev[i]){
//     cnt++;
//     }
// }
//     if(cnt==0)
//     return -1;
//     else
//      printf("\n%d",cnt);

//      return 0;
    


// char str[]=" Vaibhav is a good boy";

// char *token=strtok(str," ");

// int cnt=0;
// while(token!=NULL){
//     if(strlen(token)>1){
//     cnt++;
//     }
//     token=strtok(NULL," ");
    

// }
// printf("%d",cnt);
// return 0;


// char s[]="Vaibhav is a alien";
// char *token=strtok(s," ");

// int i,cnt=0;

// while(token!=NULL){
//     if(strlen(token)>1){
//         cnt++;
//     }
//     token=strtok(NULL," ");
// }
// printf("%d",cnt);

// char str[]="vk@gmail.com gk@gmail.com  py@gmail.com ak@yahoo.com jk@yahoo.com";
// char *token=strtok(str," ");
// char *ptr;

// int cnt=0;
// while(token!=NULL){
//     printf("%s\n ",token);
//     ptr=strchr(token,'@');
//      if(strcmp("gmail.com",ptr+1)==0){
//         cnt++;

//      }
//      token=strtok(NULL," ");
// }
// printf("No of gmails are %d",cnt);

// return 0;

// char email[]="vk@gmail.com gk@gmail.com  py@gmail.com ak@yahoo.com jk@yahoo.com";
// char *token=strtok(email," ");
// char *ptr;
// int cnt=0;
// while(token!=NULL){

// printf("%s\n",token);
// ptr=strchr(token,'@');
// if(strcmp("gmail.com",ptr+1)==0){
// cnt++;
// }

// token=strtok(NULL," ");
// }
// printf("%d",cnt);

// return 0;

// char s[]="vk@gmail.com gk@gmail.com  py@gmail.com ak@yahoo.com jk@yahoo.com";
// char *token=strtok(s," ");
// char *ptr;
// int cnt=0;
// while(token!=NULL){
//     printf("%s\n",token);
//     ptr=strchr(token,'@');
//     if(strcmp("gmail.com",ptr+1)==0)
//     cnt++;

// token=strtok(NULL," ");
// }
// printf("%d",cnt);
// return 0;

// char s[SIZE]="vk@gmail.com";
// char *ptr;

// char ch='@';

// ptr=strchr(s,ch);

// if(strcmp("gmail.com",ptr+1)==0){
//     printf("gmail is found");
// }

// else{
//     printf("not found");
// }
// return 0;


// char s[]="vk@gmail.com";

// char *ptr;
// char ch='@';

// ptr=strchr(s,ch);
// if(strcmp("gmail.com",ptr+1)==0){
//     printf("gmail is found");
// }
// else{
//     printf("Not found");
// }
// return 0;



//     char s1[]="122";
//     char s2[]="379";
//   int  n1=string_to_int(s1);
//  int  n2=string_to_int(s2);
// printf(" %d + %d = %d",n1,n2,n1+n2);


// }
// int string_to_int(char s[]){
//   int i,sum;
//  for(i=0;i!='\0';i++){
//     int value=s[i] - 48;
 
//     sum=sum+10+value;
//  }
//      return sum;
 
// }


// char s[]="Vaibhav is Great";
// int i,n=0;
// char *token=strtok(s," ");
// char *arr[200];
// char output[100];
// strcpy(output,"");
// while(token!=NULL){
//   arr[n++]=token;
//   token=strtok(NULL," ");
 
// }
// for(i=n-1;i>0;i--){
//     strcat(output,arr[i]);
//    strcat(output," ");
// }
//     strcat(output,arr[i]);
//    printf("%s\n",output);
//    return 0;


// char s[]="Vaibhav is good boy";
// char *token=strtok(s," ");
// char output[200];
// strcpy(output,"");
// char *arr[100];

// int i,n=0;
// while(token!=NULL){

//     arr[n++]=token;
//     token=strtok(NULL," ");
// }
// for(i=n-1;i>0;i--){
//     strcat(output,arr[i]);
//     strcat(output," ");

// }
// strcat(output,arr[i]);
// printf("%s",output);

// char str[]=" vk@gmail.com gk@gmail.com kk@yahoo.com gigi@yahoo.com bg@gmail.com";
// char *token=strtok(str," ");
// char *ptr;
// int cnt=0;
// while(token!=NULL){
//     ptr=strchr(token,'@');
//     printf("%s\n",token);
//     if(strcmp("gmail.com",ptr+1)==0){
//         cnt++;
//     }

//     token=strtok(NULL," ");
// }
// printf("No. of gmails are %d",cnt);
// return 0;

// char s[]="Vaibhav Kadam I love You";
// char *token=strtok(s," ");
// char output[200];
// strcpy(output,"");
// char *arr[100];
// int n=0,i;

// while(token!=NULL){
//     arr[n++]=token;
//     token=strtok(NULL," ");
// }
// for(i=n-1;i>0;i--){
//     strcat(output,arr[i]);
//     strcat(output," ");
// }
// strcat(output,arr[i]);
// printf("%s",output);


// char str[]="Vaibhav I Love you";
// char *token=strtok(str," ");
// int cnt=0;
// while (token!=NULL){
//    if(strlen(token)>1){
//      cnt++;
//    }
//   token=strtok(NULL," ");
// }
//   printf("%d",cnt);

char str[]="Vaibhav I love you";
char *token=strtok(str," ");
char output[100]="";
char *arr[100];
strcpy(output,"");

int i,n=0;
while(token!=NULL){
    arr[n++]=token;
    
}





return 0;



















}