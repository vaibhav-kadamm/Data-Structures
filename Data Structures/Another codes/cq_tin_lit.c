#include <stdio.h>
// 1 3 5 7 10 litre tin
 //input=70
 //o/p=7
 //explain-70=7*10
    //62=6*10+2*1=6+2=8
int main(){
    int tin=0,lit;

   scanf("%d",&lit);

 if(lit>=10){
    tin=tin+lit/10;
    lit=lit%10;
 }
 if(lit>=7){
    tin=tin+lit/7;
    lit=lit%7;
 }
 if(lit>=5){
    tin = tin+lit/5;
    lit=lit%5;
 }
 if(lit>=3){
    tin=tin+lit/3;
    lit=lit%3;
 }
 if(lit>=1){
    tin=tin+lit/1;
    lit=lit%1;
 }
  printf("%d",tin);
    return 0;
}