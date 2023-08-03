/*
i/p
315
o/p
351

i/p
4217
4271
4127
4712
4721
o/p
4721
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    char arr[100];
    sprintf(arr,"%d",num);
      int len=strlen(arr);
    for(i=1;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]<arr[j]){
               char k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        } 
    }
    int ans=atoi(arr);
    printf("%d",ans);
    return 0;
}