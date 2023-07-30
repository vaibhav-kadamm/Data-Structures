#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
      int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  int cnt=0;
    if(n==1){
        printf("-1");
    }
    else{
        for(i=0;i<n-1;i++){
        if(arr[i]*arr[i]==arr[i+1]){
            cnt++;
        }
        else{
            break;
        }
        }
      if(cnt==0){
      printf("-1");
      }
     else{
        printf("%d",cnt);
     }
    }
    return 0;
}