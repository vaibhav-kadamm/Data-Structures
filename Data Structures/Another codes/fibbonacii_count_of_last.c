#include <stdio.h>

int getSum(int n){
    int pn=0,nn=1,i,sum=0;
    for(i=0;i<n;i++){
        int sum=pn+nn;
        pn=nn;
        nn=sum;
    }
    while(pn>0){
     int r=pn%10;
     sum = sum+r;
     pn/=10;

    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=getSum(n);
    printf("%d",count);
    return 0;
}