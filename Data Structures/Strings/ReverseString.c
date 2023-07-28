#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[]="Vaibhav Kadam is Great Person";
    char *token=strtok(str," ");
    char *arr[100];
    char output[200];
    int n=0,i;
    strcpy(output,"");
    while(token!=NULL){
        //printf("%s\n",token);
        arr[n++]=token;
        token=strtok(NULL," ");
    }
    for(i=n-1;i>0;i--){
        strcat(output,arr[i]);
        strcat(output," ");
    }
    strcat(output,arr[i]);
    printf("%s",output);

    return 0;

}