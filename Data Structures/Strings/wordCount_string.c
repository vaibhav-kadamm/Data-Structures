#include<stdio.h>
#include<string.h>

int  main(){
    char s[]="Vaibhav Kadam is a Great Person";
    char *token = strtok(s," ");
    int cnt=0;

    while(token!=NULL){
        if(strlen(token)>1){
            cnt++;
        }
       token= strtok(NULL," ");
    }

     printf("Number of words are %d",cnt);
    return 0;
}