#include<stdio.h>
#include<string.h>
int isSubstring(char[],char[]);
int main(){

    char s[]="Vowtech IT";
    char ss[]="h";
    int i=isSubstring(s,ss);
    if(i!=-1){
    printf("%s is found at index %d",ss,i);
    }
    else{
    printf("Not found");
    }
    return 0;
}
int isSubstring(char s[],char ss[]){
    int i,j,l;
    for(i=0;s[i]!='\0';i++){
        for(j=0,l=i;ss[j]!='\0';j++,l++){
            if(s[l]!=ss[j]);
            break;
        }
        if(l==strlen(ss))
        return i;
    }
  return -1;
}