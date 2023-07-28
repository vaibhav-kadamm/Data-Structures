#include<stdio.h>
#include<string.h>
int search(char *emailDomain[],int n,char *domain);

int main(){
    char email[]="vaibhavkadam@gmail.com aljari@gmail.com pamyay@gmail.com kadamv@yahoo.com vk@hotmail.com ak@yahoo.com";
    char *token =strtok(email, " ");
    char *ptr;
    char *emailDomain[10];
    int freqCount[10],n=0;
    
    while(token!=NULL){
        ptr=strchr(token,'@');
        int index=search(emailDomain,n,ptr+1);
        if(index==-1){
            emailDomain[n]=ptr+1;
            freqCount[n]=1;
            n++;
        }
        else{
            freqCount[index]+=1;
        }
          
        token=strtok(NULL," ");
    }
    printf("Before sort\n");
    for(int i=0;i<n;i++){
    printf("%s => %d\n",emailDomain[i],freqCount[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(freqCount[i]>freqCount[j]){
            int temp=freqCount[i];
            freqCount[i]=freqCount[j];
            freqCount[j]=temp;

            char *tempstr=emailDomain[i];
            emailDomain[i]=emailDomain[j];
            emailDomain[j]=tempstr;
            }
        }
    }
    
    printf("After sort\n");
    for(int i=0;i<n;i++){
    printf("%s => %d\n",emailDomain[i],freqCount[i]);
}
return 0;    

}
int search(char *emailDomain[],int n,char *domain){

int i;
for(i=0;i<n;i++){
    if(strcmp(emailDomain[i],domain)==0){
        return i;
    }

}
    return -1;
}
