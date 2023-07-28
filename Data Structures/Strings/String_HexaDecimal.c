#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int freqCount(char s[],char ch);
int search(char freq_data[],char ch,int n);
char *gethexaDecimal(int n);
int count(char[],char);

int main(){

   char s[]="aaaaaaaaaaabbbbbccccc";
   char  freqCount[10];
   char freq_data[10];
   int i,k=0;
   char output[100]="";
   for(int i=0;s[i]!='\0';i++){
    char output1[20]="";
    if(!search(freq_data,s[i],k)){
    int cnt = count(s,s[i]);
    freq_data[k]=s[i];
    freqCount[k++]=cnt;
    output1[0]=s[i];
    output1[1]='\0';
    strcat(output1,strrev(gethexaDecimal(cnt)));

   }
   strcat(output,output1);
   }
   strrev(output);
   printf("%s",output);

   return 0;
}
int count(char s[],char ch){
    int i,cnt=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            cnt++;
        }
    }
            return cnt;

}

int search(char freq_data[],char ch,int n){
   int i;
   for(i=0;freq_data[i]!='\0';i++){
    if(freq_data[i]==ch){
        return 1;
    }

   }
   return 0;
}

char *gethexaDecimal(int n){
             char *s;
    if(n>=1 && n<=9){

        s=(char*)malloc(20);
        sprintf(s,"%d",n);
        return s;
    }
    else if(n==10){
     return "a";
    }
    else if(n==11){
     return "b";
    }
    else if(n==12){
    return "c";
    }
    else if(n==13){
    return "d";
    }
    else if(n==14){
    return "e";
    }
    else if(n==15){
     return "f";
    }
int i;
while(n>0){
    int r=n%16;
    s[i]=r+48;
    n=n/16;
    i++;
}
  s[i]='\0';
strrev(s);
return s;

}