#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *subString(char*,int ,int );
int main(){

char input[]="VowTech ITTTCPCM CPune";
char rotate[]="L2";
char *sno=rotate+1;
int no= atoi(sno);
char *token;
char output[100]="";
 
if(rotate[0]=='L'){
    token=strtok(input," ");
        char output1[50]="";
    while(token!=NULL){
        int e=strlen(token)-no;
        strcpy(output1,token+e);
        // printf("%s\n",subString(token,0,e));
        strcat(output1,subString(token,0,e));
        token=strtok(NULL," "); 
        strcat(output,output1); 
        strcat(output," ");

    }
}
        printf("%s",output);


}
char *subString(char *s,int i,int e){
    int j;
    char *output=(char *)malloc((e-i+1)*sizeof(char));
    for(j=0;i<e;i++,j++){
    output[j]=s[i];
    }
    output[j]='\0';
}