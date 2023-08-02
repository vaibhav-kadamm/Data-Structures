#include <stdio.h>
//1
//2
//3
//4
//5
//o/p-
//1
//3
//6
//10
//15
int main(){
    int i,arr[5],sum=0;
    
    for(i=0;i<5;i++){
         scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+arr[i];
        printf("\n%d\n",sum);
    }
    
    return 0;
}