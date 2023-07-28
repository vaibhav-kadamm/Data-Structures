#include<stdio.h>
#include<string.h>

int main(){
    char *s[]={"geeksforgeeks" "geeks" "geek" "geezer"};
    char output[20];
    int j;
    int n=4,i,l=0;
   for(i=0;i<n;i++){
    l=strlen(s[0]);
   }
    for(i=0;i<n;i++){
          char *s1=s[j];
     char ch=s[i];
     int flag =1;
     for(j=i+1;j<n;j++){
       char *s1=s[j];
       if(s1[i]!=ch){
        flag=0;
        break;
       }
       if(flag){
        output[l++]=ch;
       }
       else
       break;
     }
     output[l]!='\0';
     if(strlen(output)>0){
      printf("%s",output);
    }
    else{
        printf("-1");
    }
}
    return 0;

}