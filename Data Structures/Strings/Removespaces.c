#include<stdio.h>
#include<string.h>

int main(){

    char s[]="Vaibhav    I   Love You";
    char output[100];

int i,j=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ' && s[i+1]==' ');
        else
        output[j++]=s[i];
    }
    output[j]='\0';
    printf("%s\n",s);
    printf("%s",output);
}