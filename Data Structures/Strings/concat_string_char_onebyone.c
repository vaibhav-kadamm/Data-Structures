#include <stdio.h>
#include<string.h>

int main(){
    
    char s1[100],s2[100],output[100];
    scanf("%s %s",s1,s2);

    int i,j,k=0;

    for(i=0,j=0;s1[i]!='\0' && s2[j]!='\0';i++,j++){
        output[k++]=s1[i];
        output[k++]=s2[j];
    }
    while(s1[i]!='\0'){
        output[k++]=s1[i];
        i++;
    }
    while (s2[j]!='\0')
    {
       output[k++]=s2[j];
       j++;
    }
    output[k]='\0';
    printf("%s",output);
    return 0;
}