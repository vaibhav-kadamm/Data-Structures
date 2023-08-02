#include <stdio.h>
//input
//5
//234 3082 1067 1 30
//o/p-avg of it
int main(){
    int i,sum=0,avg,ans=0,n,arr[100];
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
     }
     avg=sum/n;
     for(i=0;i<n;i++){
        if(arr[i]>avg)
        ans=ans+(arr[i]-avg);
     }
     printf("%d",ans);
    return 0;
}