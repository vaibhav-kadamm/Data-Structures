#include <stdio.h>

int main(){
    char String[]="594132";
    int i,sum=0;
    for(i=0;String[i]!='\0';i++){
         char ch=String[i];
         int num=ch-48;
         sum+=num;
    }
    printf("%d",sum);
    return 0;
}