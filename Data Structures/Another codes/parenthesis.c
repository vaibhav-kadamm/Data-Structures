#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    scanf("%s",s1);
 int i,j=0,flag=1;
    if(strlen(s1)==0){
        printf("True");
    }
    else if(s1[0]==')' || s1[0]==']' || s1[0]=='}'){
        printf("false");
    }
    else{
        for(i=0;s1[i]!='\0';i++){
         if(s1[0]=='(' || s1[0]=='[' || s1[0]=='{'){    
                  s2[j++]=s1[i];
             }
             else{
                if(s1[i]==')'){
                    if(s2[j-1]=='('){
                    flag=0;
                        break;
                    }
                    else{
                          j--;
                    }
                }
                else if(s1[i]==']'){
                    if(s2[j-1]=='['){
                       flag=0;
                        break;
                    }
                    else{
                         j--;
                    }
                }
                else if(s1[i]=='}'){
                    if(s2[j-1]=='{'){
                    flag=0;
                        break;
                    }
                    else{
                          j--;
                    }
                }
                
             }
             
        }
    
    
    if(j==0 && flag){
        printf("True");

    }else{
        printf("False");
    }
    
    return 0;

}
}