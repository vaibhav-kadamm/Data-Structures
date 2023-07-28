#include<stdio.h>
#include<string.h>
#include<math.h>

int string_to_float(char[]);
int string_to_int(char[]);
int main(){
    char s1[]="125.45";
    char s2[]="379.23";
  int  n1=string_to_float(s1);
 int  n2=string_to_float(s2);
printf(" %.3f + %.3f = %.3f",n1,n2,n1+n2);
return 0;

}
int string_to_float(char s[]){
    char ds[100];char fs[100];
  int i,j;
  for(i=0;i!='.';i++){
    ds[i]=s[i];
    ds[i]='\0';

    for(i=i+1,j=0;s[i]!='\0';i++,j++){
        fs[j]=s[i];
        fs[j]='\0';
    }
        int len=strlen(fs);
        float fn=string_to_int(fs)/pow(10,len);
    
        return string_to_int(ds)+fn;
    
    }
}