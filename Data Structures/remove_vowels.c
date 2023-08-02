#include <stdio.h>
int isVowel(char);

int main(){
    char arr[100]="My Name Is Anthony";
      int i;
      for(i=0;arr[i]!='\0';i++){
              if(!isVowel(arr[i]))
                printf("%c",arr[i]);
      }
      return 0;
}
        int isVowel(char ch){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                return 1;
                
            }
            return 0;
        }
      
      
   