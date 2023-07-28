#include<stdio.h>
#include<string.h>
int main(){
    char email[]="vaibhavkadam@gmail.com aljari@gmail.com pamyay@gmail.com kadamv@yahoo.com ";
    char *token =strtok(email, " ");
    char *ptr;
    int cnt=0;
    while(token!=NULL){
        printf("%s\n",token);
        ptr=strchr(token,'@');
        if(strcmp("gmail.com",ptr+1)==0)
        cnt++;
        token=strtok(NULL," ");
    }
    printf("Number of gmail are %d ",cnt);
    return 0;
}