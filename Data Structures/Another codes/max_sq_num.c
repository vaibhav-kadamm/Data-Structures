#include <stdio.h>

int main(){
    int i,n,max=0,value;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
       scanf("%d",&value);
       int sq=value*value;
    
    if(sq>max){
        max=sq;
    }
    }
    printf("%d",max);
    return 0;
}