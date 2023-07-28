#include<stdio.h>
#include<string.h>
int isSubstring(char[],char[]);
int main(){
    char s[]="Vaibhav I Love You";
    char ss[]="Love";
    int i=isSubstring(s,ss);
    if(i!=-1){
    printf("%s is found at %d",ss,i);
    }
    else{
    printf("Not Found");
    }
    return 0;
}
int isSubstring(char s[],char ss[]){
    int i,j,l;
    for(int i=0;s[i]!='\0';i++){
        for(int j=0,l=i;ss[j]!='\0';j++,l++){
            if(s[l]!=ss[j])
            break;
        }
            if(j==strlen(ss)){
            return i;
            }

        }
        return -1;
    }
