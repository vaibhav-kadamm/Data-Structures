#include<stdio.h>
#include<string.h>

int main(){
    //alphxxdida
    //o/p=4
    char str[100]="vaibhav";
      char rev[100];
      strcpy(rev,str);
      printf("%s",strrev(rev));
      
       int cnt;
    int i;
         for( i=0;str[i]!='\0';i++){
         if(str[i]==rev[i]){
             cnt++;
         }

         }
         if(cnt==0)
          return -1;
         else
          printf("\n%d",cnt);

         

        
         return 0;

    }
