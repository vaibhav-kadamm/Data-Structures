#include<stdio.h>
#include<string.h>
int string_to_int(char[]);

int main(){
    char s1[]="122";
    char s2[]="379";
  int  n1=string_to_int(s1);
 int  n2=string_to_int(s2);
printf(" %d + %d = %d",n1,n2,n1+n2);


}
int string_to_int(char s[]){
  int i,sum;
 for(i=0;i!='\0';i++){
    int value=s[i] - 48;
 
    sum=10+value;
 }
     return sum;
 
}