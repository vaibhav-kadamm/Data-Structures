#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[]="I Love You. Vaibhav.";
    char ch[]=".";
    char rep[]="!";
    char *token=strtok(str,ch);
    char output[200];
    strcpy(output,"");

    while(token!=NULL){
        strcat(output,token);
        strcat(output,rep);
        token=strtok(NULL,ch);
    }
    printf("%s",output);

    return 0;

}





























