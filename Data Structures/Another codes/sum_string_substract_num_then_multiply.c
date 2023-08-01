#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//4 3 5
//PNP
//3
int main(){
    char s1[100];char s2[100];
    int num,sum=0,i=0;

    scanf("%[^\n]s",s1);
    scanf("%s",s2);
    scanf("%d",&num);

    char *token=strtok(s1," ");
    while(token!=NULL){
    num=atoi(token);
    if(s2[i]=='P'){
        sum+=num;
    }
    else{
        sum-=num;
    }
    i++;
    token=strtok(NULL," ");
    
    }
    if(sum<0){
        sum=-sum;
    }
    printf("%d",sum*100);

    return 0;
}