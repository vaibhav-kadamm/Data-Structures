#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int isSubstring(char arr[],int s,int e){
    char *s1;
    int n=e-s;
    s1=(char*)malloc(sizeof(char));
    int i;
    for(i=0;s<e;s++,i++){
        s1[i]=arr[s];

    }
    s1[i]='\0';
    return s1;

}
int main(){
    int n;
    scanf("%d",&n);
    char arr[100];
    sprintf(arr,"%d",n);

int len=strlen(arr);
int k=1,i,j,cnt=0;
  for(i=len;i>1;i--){
    for(j=0;j<i;j++){
    char *s2=isSubstring(arr,j,j+k);
    int value=atoi(s2);
    if(value%7==0){
        cnt++;
        if(strlen(s2)>=2 && s2[0]=='0'){
            cnt--;
        }
    }
      k++;

    }
  }
  printf("%d",cnt);
    return 0;
}