/*
possibilities
No.of Places = 4
no.of park=2
o/p=6
*/
#include <stdio.h>

int find_fact(int num){
    int fact=1,i;
    for(i=1;i<=num;i++)
    fact*=i;
    
    return fact;
}
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int ans=find_fact(n)/(find_fact(p)*find_fact(n-p));
    printf("%d",ans);
    return 0;
}